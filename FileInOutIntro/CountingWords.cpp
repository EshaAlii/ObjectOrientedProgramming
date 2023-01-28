#include<iostream>
#include<fstream>

using namespace std;

int main()
{
  // Initialize counting variable (for white spaces)
  int count = 0;

  // Define the file to be read
  ifstream input;

  // Open file input
  input.open("words.txt");

  // If the file is open
  if (input.is_open())
  {

    // And if the file hasn't reached the end
    while (!input.eof())
    {

      // We set our character variable equal to each character in the file 
      char charactar  = (char) input.get();
      
      // And if the current character is a whitespace we'll increase the count
      if (charactar == ' ')
      {
        count++;
      }
      
    }

    // Then print the count
    cout << "The amount of whitespace-seperated words in the file is " <<  count << "." << endl;

    // Close the file
    input.close();
  }

  // Otherwise output an Error message
  else
  {
    cout << "Error" << endl;
  }

  // End Program
  return 0;
} 