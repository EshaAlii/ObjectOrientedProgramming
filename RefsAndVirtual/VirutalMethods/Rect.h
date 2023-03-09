#ifndef RECT_H
#define RECT_H

#include <iostream>
#include <cmath>

using namespace std;

class Rect{
  public:

  // Initialize our Variables
  float x;
  float y;
  float w;
  float h;

  // Default/Empty Constructor
  Rect(){
    
    // Set all Variables equal to 0
    x = 0;
    y = 0;
    w = 0;
    h = 0;
  }

  // Secondary Constructor/Constructor with Paramaters
  Rect(float xenter, float yenter, float widthenter, float heightenter)
  {
    // Set Variables equal to passed inputs
    x = xenter;
    y = yenter;
    w = widthenter;
    h = heightenter;
  }

};

#endif