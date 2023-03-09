#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
	std::string name;
	int age;

public:
	Animal() {
		name = "Generic Name";
		age = 0;
	}

	Animal( std::string n, int a ) {
		name = n;
		age = a;
	}

  /* Create our virtual void talk function (add virtual since it allows to call a descendant method even if the object being used is the base class type) */
  virtual void talk()
  {
    // Output generic statement
    std::cout << "Generic Animal Noises" << std::endl;
  }

};

#endif