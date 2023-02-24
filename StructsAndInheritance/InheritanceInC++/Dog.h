#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include <vector>
#include "Animal.h"

using namespace std;

struct Dog
{
  public:

  // Create our animal called dog
  Animal dog;

  // Generic Constructor (with no parameters passed)
  Dog()
  { 
    // Say we are creating a dog
    cout << "Creating Dog" << endl;

    // Set the dog's name as Scooby
    dog.setName("Scooby");

    // Set the age as 0
    dog.setAge(0);
  }

  // Constructor (with parameters passed)
  Dog(string name, int age)
  {
    // Say we are creating a dog
    cout << "Creating Dog" << endl;

    // Set the dog's name as user input
    dog.setName(name);

    // Set the age as user input
    dog.setAge(age);
  }

  // Deconstructor
  ~Dog()
  {
    // Say we are deleting a dog :(
    cout << "Deleting Dog" << endl; 
  }

  // getName function
  string getName()
  {
    // Output the dog's name with a getter function
    return dog.getName();
  } 

  // getAge function
  int getAge()
  {
    // Output the dog's age with a getter function
    return dog.getAge();
  }

  // Food function
  void feed()
  {
    // Output the message to feed the dog
    cout << "Dog food, please!" << endl;
  }

};

#endif