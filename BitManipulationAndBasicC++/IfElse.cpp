#include <iostream>
#include <string>

using namespace std;

// Create an EvenorOdd function that takes in an integer
string EvenorOdd(int integer)
{

  // If our integer is negative we want to change it to positive so it can properly pass through the rest of the function
  if (integer < 0)
  {
    integer = integer*-1;
  }
  
  // Create check variable 
  int check = integer%2;

  // Create our output/return string
  string last;

  // We then check if it is even or odd and return the result accordingly 
  if (check == 0)
  {
    last = "The integer is even";
  }
  else if (check == 1)
  {
    last = "The integer is odd";
  }

  return last;
  
};

// Create a PosorNeg function that takes in a variable
string PosorNeg(int integer)
{
  // Create our output/return string
  string last;

  // If the integer is greater than or equal to zero we'll say its positive, otherwise its negative
  if (integer >= 0)
  {
    last = " and it is also positive.";
  }
  else if (integer < 0)
  {
    last = " and it is also negative.";
  }

  // We then return the result accordingly
  return last;
};

int main()
{

  // Create our integer variable and ask the user to input it
  int integer;
  cout << "Enter an integer: ";
  cin >> integer;

  // We then create 2 strings 
  string part1;
  string part2;

  // Make the first and second string equal to the functions previously defined
  part1 = EvenorOdd(integer);
  part2 = PosorNeg(integer);

  // We then output the first and second strings accordingly
  cout << part1 << part2 << endl;
  
  // End Program
  return 0;
}