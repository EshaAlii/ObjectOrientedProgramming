#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>

using namespace std;

class Object
{
  public:
  // Define static count variable
  static int count;

  // Default Constructor
  Object()
  {
    // Increase Count
    count++;
  }

  // Secondary constructor (pass by value + const)
  Object(const Object& another)
  {
    // Increase Count
    count++;
  }

};


#endif