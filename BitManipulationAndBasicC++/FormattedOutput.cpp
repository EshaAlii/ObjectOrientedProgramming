#include <iostream>
#include <string>
#include <bitset>

using namespace std;

// Function to convert from decimal to binary
void Binary(int pos)
{
  // We create a counter variable and set it equal to zero
  int count = 0;

  // We also create a binary array with 32 spaces (for 32 bits)
  int binary[32];

  // Until the number reaches zero
  while (pos > 0)
  {
    // We will set the binary array equal to the remainder of our integer divided by 2
    binary[count] = pos%2;

    // We then divide our integer by 2 (which will reach 0 once there is no more remainders)
    pos = pos/2;

    // We then increment our count for each digit of the binary array
    count++;
  }

  // Output the following message
  cout << "This is the value in binary: ";

  // We then output our binary array backwards
  for (int i = count-1; i >= 0; i--)
  {
    cout << binary[i];
  }
  
  // Create newline
  cout << endl;
  
}

int main()
{
  // Create a positive integer and ask for user input
  int pos;
  cout << "Enter a positive integer: ";
  cin >> pos;

  // Create a hex array called char
  char hex[20];

  // While the number is positive
  while (pos >= 0)
  {
    // We convert the integer to hex by using sprintf and store it into the hex char arry
    sprintf(hex, "%X", pos);
    
    // We then output the hex value
    cout << "This is the value in hex: " << hex << endl;

    // We then use bitset to output the value in 8-bit binary format
    cout << bitset<8> (pos) << endl;

    // Extra spacing
    cout << endl; 

    // We then ask user to again enter the input
    cout << "Enter a positive integer: ";
    cin >> pos;
  }

  // If the input is negative
  if (pos < 0)
  {
    // We outpput the following message
    cout << "The number entered is negative. Try again." << endl;
  }

  // End Program
  return 0;
}