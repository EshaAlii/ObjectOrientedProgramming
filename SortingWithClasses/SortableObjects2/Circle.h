#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "Sortable.h"

using namespace std;

class Circle : public Sortable {
  public:
  float radius;

  // Default constructor
  Circle()
  {
    // Make our radius 0
    radius = 0;
  }

  // Secondary Constructor
  Circle(float enteredradius)
  {
    // Make radius equal to passed parameter
    radius = enteredradius;
  }

  // Virtual bool Compare function
  virtual bool compare(const Sortable* sorted)
  {
    // Dynamic Casting
    const Circle* circle = dynamic_cast<const Circle*>(sorted);

    // If our current radius is less than the passed circle's radius
    if (radius < circle->radius)
    {
      // We'll return true
      return true;
    }

    // Otherwise we'll return false
    return false;
  }

  // Virtual Print function
  virtual void print()
  {
    // Output the circle with the radius of radius
    cout << "Circle with radius: " << radius << endl;
  }
};

#endif