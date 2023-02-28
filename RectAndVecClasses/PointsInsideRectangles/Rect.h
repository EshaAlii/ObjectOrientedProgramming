#ifndef RECT_H
#define RECT_H

#include <iostream>
#include <cmath>
#include "Vec.h"

using namespace std;

class Rect{
  public:

  // Initialize our Variables
  float x;
  float y;
  float width;
  float height;

  // Default/Empty Constructor
  Rect(){
    
    // Set all Variables equal to 0
    x = 0;
    y = 0;
    width = 0;
    height = 0;
  }

  // Secondary Constructor/Constructor with Paramaters
  Rect(float xenter, float yenter, float widthenter, float heightenter)
  {
    // Set Variables equal to passed inputs
    x = xenter;
    y = yenter;
    width = widthenter;
    height = heightenter;
  }

  // Contains Method
  bool contains(Vec newvec)
  {
    // Intialize our adjusted height and width variables
    float adjustheight;
    float adjustwidth;

    // Set them equal to our adjusted width and height
    adjustheight = height - y;
    adjustwidth = width + x;

    // If the vectors x and y are less than or equal to the adjusted width and height...
    if (newvec.y <= adjustheight && newvec.x <= adjustwidth)
    {
      // And if the vector's y is less than or equal to the rectangles y point and the vector's x is greater than or equal to the rectangles x point...
      if (newvec.y <= y && newvec.x >= x)
      {
        // We will say the vector is in the rectangle
        return true;        
      }
    }
    
    // Otherwise we will say it's not in the rectangle
    return false;
  }
  
};

#endif