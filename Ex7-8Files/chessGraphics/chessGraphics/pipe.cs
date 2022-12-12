using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Pipes;
using System.IO;
using System.Threading;


namespace chessGraphics
{
    public class pipe
    {
        NamedPipeServerStream pipeServer;
        StreamString ss ;

        public pipe()
        {
            pipeServer =
                new NamedPipeServerStream("chessPipe", PipeDirection.InOut, 1);
            ss = new StreamString(pipeServer);
       

        }

        public bool connect()
        {

            // Wait for a client to connect
            pipeServer.WaitForConnection();

            return pipeServer.IsConnected;
        }

        public bool isConnected()
        {
            return pipeServer.IsConnected;
        }

        public string getEngineMessage()
        {
            if (!isConnected())
                return "";

            string res = ss.getStringFromEngine();

            Console.WriteLine("code from engine " + res);


            return res;
        }

        public void sendEngineMove(string move)
        {
            if (!isConnected())
                return;

            ss.sendMoveToEngine(move);
        }

        public void close()
        {
            pipeServer.Close();
        }
    }

    
    public class StreamString
    {
        private Stream ioStream;
        private Encoding streamEncoding;

        public StreamString(Stream ioStream)
        {
            this.ioStream = ioStream;
            streamEncoding = new ASCIIEncoding();
        }

        public string getStringFromEngine()
        {
            // protocol:
            // 0 - valid move
            // 1 - valid move (you made chess)
            // 2 - invalid move (not your player)
            // 3 - invalid move (destination is not free)
            // 4 - invalid move (chess will occur)
            // 5 - invalid move (out of bounds)
            // 6 - invalid move (illegal movement with piece)
            // 7 - Invalid move - source and dest are equal
            // 8 - check mate

            byte[] inBuffer = new byte[1024];
            ioStream.Read(inBuffer, 0, 1024);


            String MyString = Encoding.ASCII.GetString(inBuffer).TrimEnd((Char)0);
            return Encoding.ASCII.GetString(inBuffer).TrimEnd((Char)0);
        }

        public void sendMoveToEngine(string outString)
        {
            // protocol:
            // e2e4
            // move e2 to e4

            byte[] t = Encoding.ASCII.GetBytes(outString);
            byte[] inBuffer = new byte[t.Length + 1];

            for (int i = 0; i < t.Length; i++ )
            {
                inBuffer[i] = t[i];
            }
            inBuffer[inBuffer.Length - 1] = 0;

            try
            {
                ioStream.Write(inBuffer, 0, inBuffer.Length);

                ioStream.Flush();
            }
            catch
            {

            }
        }
    }

}
