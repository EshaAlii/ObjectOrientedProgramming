#ifndef DYNARRAY_H
#define DYNARRAY_H

#include <iostream>
#include <vector>

using namespace std;

template <class T>

class DynArray
{
  public:

  // Create a vector for our dynamic array so we won't have to worry about size
  vector <T> dynamic_arr;

  // Operator for array-like access
  T& operator[](const int index)
  {
    // Return the value at the specified index
    return dynamic_arr[index];
  }

  // Add functionality
  void add(T t)
  {
    // Push our value into our dynamic array
    dynamic_arr.push_back(t);
  }

};


#endif