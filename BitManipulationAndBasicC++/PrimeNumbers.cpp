#include <iostream>

using namespace std;

void Prime(int N)
{
  N--;
  while (N != 0)
  {
    if (N%2==1){
      cout << N << endl;
      N--;
    }
    else if (N%2 == 0)
    {
      N--;
    }
    if (N == 2)
    {
      cout << N << endl;
    }
    if (N == 1){
      break;
    }
  }
  
}

int main()
{
  // Create our integer N and take in user input
  int N;
  cout << "Enter an integer: " << endl;
  cin >> N;
  

  // If our integer is greater than 1
  if (N > 1)
  {
    // We output the following message
    cout << "The prime numbers strictly less than the entered integer are as follows: " << endl;

    // And run it through our Prime function
    Prime(N);
  }
  // If the integer is equal to 1...
  else if (N == 1)
  {
    cout << "The integer entered is 1, and there is nothing less than 1 that is prime." << endl;
  }
  // Otherwise...
  else
  {
    cout << "The integer entered is either negative or 0 and cannot have a prime number below it." << endl;
  }


  // End Program
  return 0;
}