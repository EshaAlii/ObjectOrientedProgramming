#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include <vector>
#include "Animal.h"

using namespace std;

// Change this to public Animal (to make things easier)
struct Dog : public Animal{

  public:
  // Constructor (with parameters passed)
  Dog(string name, int age)
  {
    // Say we are creating a dog
    cout << "Creating Dog" << endl;

    // Set the dog's name as user input
    setName(name);

    // Set the age as user input
    setAge(age);
  }

  // Deconstructor
  ~Dog()
  {
    // Say we are deleting a dog :(
    cout << "Deleting Dog" << endl; 
  }

  // Food function
  void feed()
  {
    // Output the message to feed the dog
    cout << "Dog food, please!" << endl;
  }

};

#endif