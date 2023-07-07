using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace chessGraphics
{
    public class Square
    {
        int _colIndex;
        int _rowIndex;
        
        public Square(int row, int col)
        {
            _rowIndex = row;
            _colIndex = col;
        }

        public int Row
        {
            get { return _rowIndex; }
        }

        public int Col
        {
            get { return _colIndex; }
        }

        public override string ToString()
        {
            return Convert.ToChar('a' + _colIndex).ToString() + (8 - _rowIndex).ToString();
        }
    }
}
