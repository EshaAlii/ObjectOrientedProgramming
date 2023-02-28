#ifndef VEC_H
#define VEC_H

#include <iostream>

using namespace std;

class Vec
{
  public:
  // Initialize our Variables
  float x;
  float y;

  // Default/Empty Constructor
  Vec()
  {
    // Set x and y equal to zero
    x = 0;
    y = 0;
  }

  // Secondary Constructor/Constructor with Paramaters
  Vec(float xenter, float yenter)
  {
    // Set x and y equal to user inputs
    x = xenter;
    y = yenter;
  }

  // Set function
  void set(float newx, float newy)
  {
    // Set x and y as new inputs
    x = newx;
    y = newy;
  }

  // Add function
  void add(Vec newvec)
  {
    // Make x and y equal to the entered vectors x and y + the local instance of x and y
    x = newvec.x + x;
    y = newvec.y + y;
  }

  // Print function
  void print()
  {
    // Print out the x and y values for the vector
    cout << "(" << x << ", " << y << ")" << endl;
  }

};

#endif