#include <iostream>

using namespace std;

int main()
{
  // Create two integers (as floats)
  float num1;
  float num2;

  // Ask for user to input values for those integers
  cout << "Enter two numbers that will be manipulated with pointers: " << endl;
  cin >> num1;
  cin >> num2;

  // Create two pointers (as floats)
  float *point1;
  float *point2;

  // Set them equal to the user inputs
  point1 = &num1;
  point2 = &num2;

  // Add the values using pointer notation
  int add;
  add = *point1 + *point2;
  cout << "Addition using pointers: " << add << endl;

  // Subtract the values using pointer notation
  int subtract;
  subtract = *point1 - *point2;
  cout << "Subtraction using pointers: " << subtract << endl;

  // Multiply the values using pointer notation
  int mult;
  mult = *point1 * *point2;
  cout << "Multiplication using pointers: " << mult << endl;
  
  // If the second entered number isn't zero
  if (*point2 != 0)
  {
    // Divide the values using pointer notation
    float divide;
    divide = (*point1 / *point2);
    cout << "Division using pointers: " << divide << endl;
  }
  else
  {
    // Otherwise we'll say division can't be accomplished
    cout << "Division can't be done with 0." << endl;
  }

  // End Program
  return 0;
}