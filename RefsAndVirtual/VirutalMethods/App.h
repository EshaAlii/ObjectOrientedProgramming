#ifndef APP_H
#define APP_H

#include <iostream>
#include "Rect.h"

using namespace std;

// AppWindow Class
class AppWindow
{
  protected:
    // Create a protected instance of our Rect class
    Rect rect;

  public:

    // Define our width and height as public members
    float w;
    float h;

    // AppWindow Default Constructor
    AppWindow()
    {
      // Intialize all members of rect as 0
      rect.x = 0;
      rect.y = 0;
      rect.w = 0;
      rect.h = 0;
    }

    // AppWindow Secondary Constructor
    AppWindow(float xnew, float ynew, float wnew, float hnew)
    {
      // Initialize all members of rect as passed params
      rect.x = xnew;
      rect.y = ynew;
      rect.w = wnew;
      rect.h = hnew;
    }

    // AppWindow Third Constructor
    AppWindow(const Rect& r)
    {
      // Intialize all members of rect equal to passed members of r
      rect.x = r.x;
      rect.y = r.y;
      rect.w = r.w;
      rect.h = r.h;
    }

    // Getter Function
    const Rect& get_rect()
    {
      // Return our rect
      return rect;
    }

    // Resize Function
    virtual void resize(int w, int h)
    {
      // Redefine width and height members of rect equal to passed params
      rect.w = w;
      rect.h = h;
    }
};


// CircleWin Class (Inherits From AppWindow)
class CircleWin : public AppWindow
{
  protected:
    // Create a protected float called radius
    float radius;

  public:

    // CircleWin Default Constructor
    CircleWin()
    {
      // Intialize all members of rect as 0
      rect.x = 0;
      rect.y = 0;
      rect.w = 0;
      rect.h = 0;
    }

    // CircleWin Secondary Constructor
    CircleWin(float xnew, float ynew, float wnew, float hnew)
    {
      // Initialize all members of rect as passed params
      rect.x = xnew;
      rect.y = ynew;
      rect.w = wnew;
      rect.h = hnew;
    }

    // CircleWin Third Constructor
    CircleWin(const Rect& r)
    {
      // Intialize all members of rect equal to passed members of r
      rect.x = r.x;
      rect.y = r.y;
      rect.w = r.w;
      rect.h = r.h;
    }

    // Resize Function
    virtual void resize(int w, int h)
    {
      // If the height is greater than the width...
      if (h > w)
      {
        // Height will be the maximum dimension and therefore will be considered the radius
        radius = h;
      }
        
      // Otherwise...
      else
      {
        // Width will be the maximum dimension and therefore will be considered the radius
        radius = w;
      }

      // We then output the radius
      cout << "radius: " << radius << endl;
      
    }


};

class RectWin : public AppWindow
{
  protected:
    // Create a protected float called area
    float area = w * h;

  public:

    // RectWin Default Constructor
    RectWin()
    {
      // Intialize all members of rect as 0
      rect.x = 0;
      rect.y = 0;
      rect.w = 0;
      rect.h = 0;
    }

    // RectWin Secondary Constructor
    RectWin(float xnew, float ynew, float wnew, float hnew)
    {
      // Initialize all members of rect as passed params
      rect.x = xnew;
      rect.y = ynew;
      rect.w = wnew;
      rect.h = hnew;
    }

    // RectWin Third Constructor
    RectWin(const Rect& r)
    {
      // Intialize all members of rect equal to passed members of r
      rect.x = r.x;
      rect.y = r.y;
      rect.w = r.w;
      rect.h = r.h;
    }

    // Resize Function
    virtual void resize(int w, int h)
    {
      // Set area equal to the width multiplied by the height
      area = w * h;

      // We then output the area
      cout << "area: " << area << endl;
    }
};




#endif