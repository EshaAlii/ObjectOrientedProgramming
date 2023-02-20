#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  // Our original string that will take in inputs
  string str;

  // An additional string that we will manipulate (aka make all lowercase)
  string copystr;

  // Our original vector to push in the original inputs
  vector<string> strvector;

  // Our copy vector to push our manipulated inputs
  vector<string> copyvector;

  // Prompt the user and take in input
  cout << "Enter the string: " << endl;
  cin >> str;

  // Copy the input
  copystr = str;
  
  // Make the copied one all lowercase
  char wordchar;
  int s = 0;
  while (copystr[s])
  {
    wordchar = copystr[s];
    copystr[s] = tolower(wordchar);
    s++;
  }
  
  // Until the user inputs the word quit
  while (copystr != "quit")
  {
    // If the size of the string is 1 (aka a char is entered)
    if (str.size() == 1)
    {
      // From 0 to the size of the vector
      for (int i = 0; i < copyvector.size(); i++)
      {
        // If the character is equal to the first letter in our copyvector
        if (str[0] == copyvector[i][0])
        {
          // We will output the values of our original vector
          cout << strvector[i] << endl;
        }
      }
    }

    // Otherwise
    else
    {
      // We will push back our string into our string vector
      strvector.push_back(str);

      // And push back our copied string into our copied vector
      copyvector.push_back(copystr);
    }

    // We will then take in a new input
    cin >> str;

    // Copy that input
    copystr = str;
      
    // And make the copied one all lowercase
    char wordchar2;
    int s2 = 0;
    while (str[s2])
    {
      wordchar2 = copystr[s2];
      copystr[s2] = tolower(wordchar2);
      s2++;
    }
  
  }
  
  // End Program
  return 0;
}