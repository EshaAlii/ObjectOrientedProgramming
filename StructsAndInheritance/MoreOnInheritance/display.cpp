#include <iostream>
#include <vector>
#include <string>
#include "Animal.h"
#include "Dog.h"
#include "display.h"

using namespace std;

int main()
{
  // Intiailize the size of our display
  int N;

  // Ask the user for the size of the display
  cin >> N;

  // Create our character, str, and integer variables
  char character;
  string str;
  int integer;

  // Create our vector (of type Animal*)
  vector<Animal*> vect;

  // Until we reach the size of the display
  for (int i = 0; i < N; i++)
  {
    // We will ask the user to input a character for a generic animal or a dog
    cin >> character;

    // If the character is A...
    if (character == 'A')
    {
      // Ask the user for the name of the animal
      cin >> str;

      // Ask the user for the age of the animal
      cin >> integer;

      // We will create a new Animal
      Animal* animal = new Animal;

      // Set the name and age of the animal
      animal->setName(str);
      animal->setAge(integer);

      // And push back the animal into our vector
      vect.push_back(animal);
      
    }

    // Otherwise if the character is D...
    else if (character == 'D')
    {
      // Ask the user for the name of the dog
      cin >> str;

      // Ask the user for the age of the dog
      cin >> integer;

      // We will create a new Dog
      Dog* dog = new Dog(str, integer);

      // And push back the dog into our vector
      vect.push_back(dog);
    }

    else
    {
      // Tell the user to try the code again
      cout << "Try again" << endl;

      // And end the program
      return 0;
    }
  }

  // We will then display the vector
  display(vect);
    
  // End Program
  return 0;
}

