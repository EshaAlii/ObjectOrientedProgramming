#include<iostream>
#include<fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  // Initialize counting variable (for character occurance)
  int count = 0;

  // Define the file to be read
  ifstream input;

  // Open the file input
  input.open("words.txt");

  // If the file is open
  if (input.is_open())
  {
    // Take in user input
    string word;
    cout << "Enter a word: ";
    cin >> word;

    // We make the word all lowercase in case the user puts it in all caps
    char wordchar;
    int s = 0;
    while (word[s]){
      wordchar = word[s];
      word[s] = tolower(wordchar);
      s++;
    }

    // And until we reach the end of the file
    while (!input.eof())
    {
      // We create a string that will hold the condensed version of our .txt file
      string condense;
      while (input >> condense)
      {
        // We then make every letter in that condensed string into a lowercase
        char condensechar;
        int j = 0;
        while(condense[j])
        {
          condensechar = condense[j];
          condense[j] = tolower(condensechar);
          j++;
        }

        // We then also remove any punctuation in the condensed string
        char newchar;
        int k = 0;
        while (condense[k])
        {
          if (ispunct(condense[k]))
          {
            condense.erase(k--, 1);
          }
          k++;
        }

        // We then compare each our condensed string to our word string, if it matches we increase the count
        for (int i = 0; i < condense.size();i++)
        {
          if (condense == word)
          {
            count++;
          }
          else
          {
            continue;
          }
        }
        
      }
    }
    // We then print out the count
    cout << "There is " << count/word.size() << " occurences of the word '" << word << "'." << endl;
  }

  // If the file couldn't be opened we output an error message
  else
  {
    cout << "Error" << endl;
  }


  // End Program
  return 0;
}