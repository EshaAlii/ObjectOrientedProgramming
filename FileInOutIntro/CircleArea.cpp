#include <iostream>
#include <math.h>

using namespace std;

int main()
{

  // Create our Radius and Area varaibles
  float Radius;
  float Area;

  // Ask the user to enter the Radius of the circle
  cout << "Enter the radius of the Circle: ";
  cin >> Radius;

  // Calculate the Area (Area = pi*r^2)
  Area = M_PI * (Radius*Radius);

  // We then output the Area
  cout << "The area of the circle is: " << Area << endl;

  // End Program
  return 0;
}