// ! https://atcoder.jp/contests/abc264/tasks/abc264_b

/*
* Editorial
One can get accepted by embedding the information of 15×15 grid in the source code, but it’s a bit troublesome. Since the grid is symmetric and regular with respect to the center square (at the 8-th row and 8-th column), we can solve it more simply as follows.
In the given grid, the square is painted black if the “distance” from the central square is odd; white if it is even. Specifically, the square at the R-th row and C-th column is black if and only if its //* Chebyshev distance (chessboard distance) from the central square, is odd.
max{∣R−8∣,∣C−8∣},
(Here, ∣x∣ denotes the absolute value of x).
Therefore, the problem can be concisely solved by computing (1) above and checking its parity, as in the following sample code (C++):
*/
// ! Editorial Code

#include <iostream>
using namespace std;
int main(void)
{
  int r, c;
  cin >> r >> c;
  
  if(max(abs(r-8), abs(c-8)) % 2) cout << "black" << endl;
  else cout << "white" << endl;
  
  return 0;
}

