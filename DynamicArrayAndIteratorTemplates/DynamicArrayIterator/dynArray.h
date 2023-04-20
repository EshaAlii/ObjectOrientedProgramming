#ifndef DYNARRAY_H
#define DYNARRAY_H

#include <iostream>
#include <vector>

using namespace std;

// Create our template class
template <class T>

// Create our DynArray Class
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

  int size () const
  {
    return dynamic_arr.size();
  }

};

// Create another template class
template <class T>

// Create our Iterator Class
class Iterator
{
  // Iterator reference to array
  T& arr;

  // Our iterator
  int iterator;

  public:

  // Create our Iterator Constructor
  Iterator(T& a) : iterator(0), arr(a) 
  {
    // Empty Constructor
  }

  // Begin function
  void begin()
  {
    // Set our iterator to 0
    iterator = 0;
  }

  // at_end Function
  bool at_end() const
  {
    // Return if its true or false if the iterator and the array size are equivalent
    return iterator == arr.size();
  }

  // Advance Function
  void advance()
  {
    // Increment our iterator
    iterator++;
  }

  // Print Function
  void print() const 
  {
    // Print out the iterator along with the array's value at that point of the iteration
    cout << iterator << ": " << arr[iterator] << endl;
  }
};



#endif