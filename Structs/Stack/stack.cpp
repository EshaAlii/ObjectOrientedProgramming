#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
  // Declare our stack
  Stack stack;

  // Declare our double variable
  double doub;

  // Declare our number variable
  int number;

  // Declare our iterator
  int k = 0;

  // Take in the user input for the number
  cin >> number;

  // Intialize the stack
  stack.initialize();

  // Until the iterator reaches our number
  while (k != number)
  {
    // Ask the user to input double numbers
    cin >> doub;

    // Push the values onto the stack as a new double 
    stack.push(new double (doub));

    // Iterate
    k++;
  }

  // Clear our iterator
  k = 0;

  // Until the iterator reaches our number
  while (k!= number)
  {
    // We will output using peek to see what element we inserted
    cout <<  *((double*)stack.peek()) << endl;
    // Pop out that specific element in our stack
    stack.pop();

    // Iterate
    k++;
  }

  // Cleanup function
  stack.cleanup();

  // Add extra spacing
  cout << endl;
  
  // End Program
  return 0;
}