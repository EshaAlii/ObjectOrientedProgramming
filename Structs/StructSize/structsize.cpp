#include <iostream>
#include "structsize.h"

using namespace std;

int main()
{
  // Output the size of a char and a double in a struct 
  ACharAndDouble test1;
  test1.findByte();

  // Output the size of two chars and a double in a struct 
  TwoCharsAndDouble test2;
  test2.findByte();

  // Output the size of three chars and a double in a struct 
  ThreeCharsAndDouble test3;
  test3.findByte();

  // Output the size of four chars and a double in a struct 
  FourCharsAndDouble test4;
  test4.findByte();

  // Output the size of an empty struct 
  Empty test5;
  test5.findByte();

  // Output the size of a char, followed by an int, followed by another char
  CharIntChar test6;
  test6.findByte();

  // Output the size of two chars and an int in a struct 
  TwoCharsAndInt test7;
  test7.findByte();
  
  // End Program
  return 0;
}