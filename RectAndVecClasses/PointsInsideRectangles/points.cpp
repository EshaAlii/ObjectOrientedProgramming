#include <iostream>
#include "Rect.h"
#include <vector>

using namespace std;

int main()
{
  // Create our float variables for the rectangles x, y, width, and height inputs
  float rectx;
  float recty;
  float rectw;
  float recth;

  // Create our vector to hold our rectangles
  vector<Rect> rectvec;

  // Ask user for the variables to define a rectangle
  cout << "Type 4 floats to define a rectangle: ";
  cin >> rectx >> recty >> rectw >> recth;

  // Until all of the points are negative...
  while (rectx >= 0 || recty >= 0 || rectw >= 0 || recth >= 0)
  {
    // We will create a new rectangle
    Rect rect;

    // Set all the variables in the rectangle equal to the user inputted ones
    rect.x = rectx;
    rect.y = recty;
    rect.width = rectw;
    rect.height = recth;

    // Push back the rectangle into our vector
    rectvec.push_back(rect);

    // And once again ask for user input
    cout << "Type 4 floats to define a rectangle: ";
    cin >> rectx >> recty >> rectw >> recth;
  }

  // Extra spacing
  cout << endl;

  // Create our float variables to define a point/Vec
  float vecx;
  float vecy;

  // Ask user for the floats to define a point/Vec
  cout << "Type 2 floats to define a point: ";
  cin >> vecx >> vecy;

  // Until the user inputs the float pair -99.0, -99.0
  while (vecx != -99.0 || vecy != -99.0)
  {
    // We will create a new vector
    Vec vec;

    // Set all the variables in the vector equal to the user inputted ones
    vec.x = vecx;
    vec.y = vecy;

    // As we traverse our rectangle vector...
    for (int i = 0; i < rectvec.size(); i++)
    {
      // If the specified rectangle contain our point/Vec
      if (rectvec[i].contains(vec) == true)
      {
        // We will say the point is INSIDE of the specified rectangle
        cout << "The point is INSIDE of rectangle " << i << endl;
      }
      // Otherwise if the specified rectangle doesn't contain our point/Vec
      else if (rectvec[i].contains(vec) == false)
      {
        // We will say the point is OUTSIDE of the specified rectangle
        cout << "The point is OUTSIDE of rectangle " << i << endl;
      }
    }

    // Extra spacing
    cout << endl;

    // And once again ask for user input
    cout << "Type two points to define a point: ";
    cin >> vecx >> vecy;
  }

  // We then print out the message Finished to indicate the program is done
  cout << "Finished!" << endl;

  // End Program
  return 0;
}