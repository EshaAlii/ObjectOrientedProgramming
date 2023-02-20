#ifndef ENTRY_H
#define ENTRY_H

#include <iostream>

using namespace std;

struct ACharAndDouble
{
  // Declare our variables
  char charred;
  double doubled;

  // Function to find the size of the struct
  void findByte()
  {
    // Use sizeof to find how many bytes the varaibles take up
    int sum = sizeof(ACharAndDouble);

    // Output the size
    cout << "The size of one Char and a Double in a struct is: " << sum << " bytes." << endl;

    // Extra Spacing
    cout << endl;
  }

};

struct TwoCharsAndDouble
{
  // Declare our variables
  char charred;
  char charred2;
  double doubled;

  // Function to find the size of the struct
  void findByte()
  {
    // Use sizeof to find how many bytes the varaibles take up
    int sum = sizeof(TwoCharsAndDouble);

    // Output the size
    cout << "The size of two Chars and Double in a struct is: " << sum << " bytes" << endl;

    // Extra Spacing
    cout << endl;
  }

};

struct ThreeCharsAndDouble
{
  // Declare our variables
  char charred;
  char charred2;
  char charred3;
  double doubled;

  // Function to find the size of the struct
  void findByte()
  {
    // Use sizeof to find how many bytes the varaibles take up
    int sum = sizeof(ThreeCharsAndDouble);
    
    // Output the size
    cout << "The size of three Chars and a Double in a struct is: " << sum << " bytes" << endl;

    // Extra Spacing
    cout << endl;
  }

};

struct FourCharsAndDouble
{
  // Declare our variables
  char charred;
  char charred2;
  char charred3;
  char charred4;
  double doubled;

  // Function to find the size of the struct
  void findByte()
  {
    // Use sizeof to find how many bytes the varaibles take up
    int sum = sizeof(FourCharsAndDouble);

    // Output the size
    cout << "The size of four Chars and a Double in a struct is: " << sum << " bytes" << endl;

    // Extra Spacing
    cout << endl;
  }

};

struct Empty
{
  // Function to find the size of the struct
  void findByte()
  {
    // Use sizeof to find how many bytes the varaibles take up
    int sum = sizeof(Empty);

    // Output the size
    cout << "The size of an Empty struct is: " << sum << " byte" << endl;

    // Extra Spacing
    cout << endl;
  }
};

struct CharIntChar
{
  // Declare our variables
  char charred;
  int inted;
  char charred2;

  // Function to find the size of the struct
  void findByte()
  {
    // Use sizeof to find how many bytes the varaibles take up
    int sum = sizeof(CharIntChar);

    // Output the size
    cout << "The size of a Char, an Int, and another Char in a struct is: " << sum << " bytes" << endl;

    // Extra Spacing
    cout << endl;
  }

};

struct TwoCharsAndInt
{
  // Declare our variables
  char charred;
  char charred2;
  int inted;

  // Function to find the size of the struct
  void findByte()
  {
    // Use sizeof to find how many bytes the varaibles take up
    int sum = sizeof(TwoCharsAndInt);

    // Output the size
    cout << "The size of two Chars and int in a struct is: " << sum << " bytes" << endl;

    // Extra Spacing
    cout << endl;
  }

};

#endif