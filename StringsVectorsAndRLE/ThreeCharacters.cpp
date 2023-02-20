#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  // Create an input string and a copy string
  string input;
  string copy;

  // Create an input vector and copy vector
  vector<string> inputvect;
  vector<string> copyvect;

  // We take in user input
  cout << "Input: ";
  cin >> input;

  // Copy the input to be manipulated
  copy = input;

  // Make the copied input lowercase
  char wordchar;
  int s = 0;
  while (copy[s])
  {
    wordchar = copy[s];
    copy[s] = tolower(wordchar);
    s++;
  }

  // Until the user inputs the word quit
  while (copy != "quit")
  {
    // If the input size is 3 characters or less...
    if (input.size() <= 3)
    {
      // From 0 to the size of the vector
      for (int i = 0; i < copyvect.size(); i++)
      {
        // If the first three characters is equal to the ones in our copy vector
        if (copy[0] == copyvect[i][0] && copy[1] == copyvect[i][1] && copy[2] == copyvect[i][2])
        {
          // We'll output our input vector
          cout << "Output: " <<  inputvect[i] << endl;
        }
        // Otherwise if only the first two characters are equal to the ones in our copy vector
        else if (copy[0] == copyvect[i][0] && copy[1] == copyvect[i][1])
        {
          // We'll output our input vector
          cout << "Output: " << inputvect[i] << endl;
        }
        // Otherwise if only the first character is equal to the one in our copy vector
        else if (copy[0] == copyvect[i][0])
        {
          // We'll output our input vector
          cout << "Output: " << inputvect[i] << endl;
        }
      }
    }

    // Otherwise...
    else
    {
      // We will push back our input into our input vector 
      inputvect.push_back(input);

      // We will push back our copied input into our copy vector
      copyvect.push_back(copy);
    }

    // We will then ask for user input again
    cout << "Input: ";
    cin >> input;

    // We will copy the input
    copy = input; 

    // And make it lowercase so it can further be manipulated
    char wordchar2;
    int s2 = 0;
    while (copy[s2])
    {
      wordchar2 = copy[s2];
      copy[s2] = tolower(wordchar2);
      s2++;
    }
  }

  // End Program
  return 0;
}