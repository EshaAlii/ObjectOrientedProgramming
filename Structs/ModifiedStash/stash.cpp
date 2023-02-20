#include <iostream>
#include "Stash.h"

using namespace std;

int main()
{

  // Create our stash
  Stash stash;

  // Inialize our increment
  int increment;

  // Ask user to input the increment
  cout << "Enter the increment: ";
  cin >> increment;

  // Intialize our stash to have the size of a char and to include our increment
  stash.initialize(sizeof(char), increment);

  // Intiailize our character and number variables
  char character;
  int number;

  // Get user to input the chararacter and number variables
  cout << "Enter a char and a number as follows (c, n): ";
  cin >> character >> number;

  // Until the user inputs the pair (&, 99)...
  while (character != '&' && number != 99)
  {
    // If the number entered is negative
    if (number < 0)
    {
      // We will make it positive
      number = number * -1;

      // Initiailize our newline variable
      char newline = '\n';

      // From 0 to |number|...
      for (int i = 0; i < number; i++)
      {
        // We will add the character to our stash
        stash.add(&character);
      }

      // We will also add a newline to our stash
      stash.add(&newline);
    }

    // Otherwise if the number is positive...
    else
    {
      // From 0 to our number
      for (int i = 0; i < number; i++)
      {
        // We will add the character to our stash
        stash.add(&character);
      }
    }

    // We will then get the user to input the chararacter and number variables again
    cout << "Enter a char and a number as follows (c, n): ";
    cin >> character >> number;
  }

  cout << endl;

  cout << "Output: " << endl;

  for (int i = 0; i < stash.count(); i++)
  {
    cout << *(char*)stash.fetch(i);
  }

  cout << endl;

  cout << "Number of reallocations: " << stash.reallocate << endl;
  cout << "Size of stash: " << stash.quantity << endl;

  cout << endl;

  stash.cleanup();

  cout << endl;

  
  // End Program
  return 0;
}