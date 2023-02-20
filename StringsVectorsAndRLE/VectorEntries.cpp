#include <iostream>
#include <vector>

using namespace std;

int main()
{
  // Integer Variable
  int integer;

  // Our integer vector called vector int 
  vector<int> intvector;

  // Prompt the user to enter a lis of number
  cout << "Enter a list of numbers: " << endl;

  // Take in the first number
  cin >> integer;

  // Until zero is entered...
  while (integer != 0){
    // if the integer is positive
    if (integer > 0)
    {
      // We push it onto the vector
      intvector.push_back(integer);
    }
    // Otherwise if the integer is negative
    else if (integer < 0)
    {
      // We make it positive (absolute value of it)
      integer = integer * -1;

      // Go through the vector
      for (int i = 0; i < intvector.size(); i++)
      {
        // and if the integer is equal to any part of the vector
        if (integer == intvector[i])
        {
          // We'll remove it
          intvector.erase(intvector.begin() + i);
        }
      }
    }
    
    // Then take in another integer
    cin >> integer;
  }

  // Create a sum variable equal to zero
  int sum = 0;

  // Go through the vector
  for (int i = 0; i < intvector.size(); i++){
    
    // We then add each part of the vector with the other part until we get our sum
    sum = intvector[i] + sum;
  }

  // We then output the current vector size and sum
  cout << "This is the current size of the vector and the sum of each index of the vector: " << endl;
  cout << intvector.size() << " " << sum << endl;

  
  // End Program
  return 0;
}