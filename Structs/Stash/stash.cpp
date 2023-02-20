#include <iostream>
#include "Stash.h"

using namespace std;

int main()
{
  // Declare our stash
  Stash stash;

  // Declare our double variable
  double doub;

  // Declare our number variable
  int number;

  // Declare our iterator
  int k = 0;

  // Take in the user input for the number
  cin >> number;

  // Intialize the stash (to carry at least the size of a double)
  stash.initialize(sizeof(double));

  // Until the size of the user inputted number is reached
  while (k != number)
  {
    // Ask the user to input double numbers
    cin >> doub;

    // And add them to the stash (+ increase spacing as a result)
    stash.add(&doub);

    // Iterate
    k++;

  }

  // For each element in the stash
  for (int i = 0; i < stash.count(); i++)
  {
    // We will output it 
    cout << *(double*)stash.fetch(i) << endl;
  }

  // We then free up storage in the stash
  stash.cleanup();

  // End Program
  return 0;
}