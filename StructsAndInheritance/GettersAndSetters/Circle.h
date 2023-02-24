#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <math.h>

using namespace std;

struct Circle
{
  private:
  double x;
  double y;
  double r;

  public:
  double area;

  // Constructor with no variables passed
  Circle()
  {
    // Assume center is (0,0) and radius is at least 1
    x = 0;
    y = 0;
    r = 1;

    // Area is pi * r^2
    area = M_PI * r * r;
  }

  // Constructor with variables passed
  Circle(double x1, double y1, double r1)
  {
    // Set center to (x1, y1) and radius as r1
    x = x1;
    y = y1;
    r = r1;

    // Area is pi * r^2
    area = M_PI * r * r;
  }

  // getX function
  double getX()
  {
    // Return x value
    return x;
  }

  // getY function
  double getY()
  {
    // Return y value
    return y;
  }

  // getR function
  double getR()
  {
    // Return r value
    return r;
  }

  // setX function
  void setX(double xset)
  {
    // Make x equal to our xset variable
    x = xset;
  }  

  // setY function
  void setY(double yset)
  {
    // Make y equal to our yset variable
    y = yset;
  }

  // setR function
  void setR(double rset)
  {
    // Make r equal to our rset variable
    r = rset;

    // Area is pi * r^2
    area = M_PI * r * r;
  }

};


#endif