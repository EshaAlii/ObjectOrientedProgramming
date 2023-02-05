#include <iostream>
#include <bitset>
#include <math.h>

using namespace std;

int getBit(int n, int index)
{
  // Create a bitset variable called bit and set it equal to the binary of our decimal number
  bitset<10> bit;
  bit = bitset<10> (n);

  // Create a get variable to extract the number at our specified index
  int get;

  // We then set get equal to the bit at that specified index
  get = bit[index];

  // And then return get
  return get;
}

void setBit(int n, int index)
{

  // Create a bitset variable called bit and set it equal to the binary of our decimal number
  bitset<10> bit;
  bit = bitset<10> (n);
  
  // If the bit at our index is 0
  if (bit[index] == 0)
  {
    // We'll change it to 1
    bit[index] = 1;
  }
  // Otherwise if it's already 1
  else if (bit[index] == 1)
  {
    // We'll keep it as 1
    bit[index] = 1;
  }

  // Output the binary representation of the now set bit
  cout << "Setting the bit at position " << index << " is: ";
 for (int i = 9; i >= 0; i--)
 {
   cout << bit[i];
 }
  cout << endl;
  
}

void clearBit(int n, int index)
{

  // Create a bitset variable called bit and set it equal to the binary of our decimal number
  bitset<10> bit;
  bit = bitset<10> (n);
  
  // If the bit at our index is 1
  if (bit[index] == 1)
  {
    // We'll change it to 0
    bit[index] = 0;
  }
  // Otherwise if it's already 0
  else if (bit[index] == 0)
  {
    // We'll keep it as 0
    bit[index] = 0;
  }

  // Output the binary representation of the now cleared bit
  cout << "Clearing the bit at position " << index << " is: ";
 for (int i = 9; i >= 0; i--)
 {
   cout << bit[i];
 }
  cout << endl;
  
}


int main()
{
  // Create our decimal number variable "n"
  int n;

  // Create our position variable called "index"
  int index;

  // Get user input for decimal number
  cout << "Enter a decimal number: ";
  cin >> n;

  // Get user input for position
  cout << "Enter a position: ";
  cin >> index;

  // Create a bitset variable called bit and set it equal to the binary of our decimal number
  bitset<10> bit;
  bit = bitset<10> (n);

  // Output our bit variable
  cout << "Decimal to bit conversion: " <<  bit << endl;

  // Create an integer variable called bit2
  int get;

  // Call on getBit function to extract the bit at the index of our decimanl number in binary + set equal to get
  get = getBit(n, index);

  // Output the extracted bit at the index
  cout << "The original bit at position " << index <<  " is: " << get << endl;

  // Call on setBit to get the binary of the bit set to 1 at our specified index
  setBit(n, index);

  // Call on clearBit to get the binary of the bit set to 0 at our specified index
  clearBit(n, index);

  // End Program
  return 0;
}