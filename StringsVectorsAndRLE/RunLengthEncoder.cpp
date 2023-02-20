#include <iostream>

using namespace std;

int main()
{
  // Create our char variable
  char charinput;

  // Create our number variable
  int number;

  // Prompt the user to enter a number and a char
  cout << "Enter a char and a number: " << endl;
  cin >> charinput >> number;

  // Until the user inputs a number of -2...
  while (number != -2){

    // If the user inputs a number of -1 we will prifnt out a newline
    if (number == -1){
      cout << '\n';
    }
      
    // Otherwise we will output our char variable as many times as the user inputted number
    else{
      for (int i = 0; i < number; i++){
        cout << charinput;
      }
    }
    // We then take in a new char variable and number variable
    cin >> charinput >> number;
  }

  // End Program
  return 0;
}