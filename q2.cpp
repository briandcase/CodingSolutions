/*******************************/
/*      */
/*  This program prints out    */
/*  a series of coordinates    */
/*  that are stored in a       */
/*  variable.                  */
/*******************************/
#include <iostream>
using namespace std;

int main()
{
  // Create variables to store our X and Y coordinates.
  int xCord = 1;
  int yCord = 1;

  // Nested for loop to iterate over our variables.
  for(int i = 0; i <= 3; i++)
  {
    for(int j = 0; j <= 3; j++)
    {
      // This prints out our coordinates.
      cout << "(" << xCord << ", " << yCord << ") ";
      // This increments our y coordinate.
      yCord += 1;
    }
      cout << endl;
      // This increments our X coordinate and resets the ycoordinate.
      xCord += 1;
      yCord -= 4;
  }

  return 0;
}
