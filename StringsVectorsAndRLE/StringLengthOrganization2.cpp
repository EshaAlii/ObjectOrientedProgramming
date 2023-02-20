#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{

  // Create our "2D" pointer vector
  vector <vector<string>* > vect;

  // Intialize vector full of temp pointers
  for (int i = 0; i < 9; i++)
  {
    vector<string>* temp = new vector<string>();
    vect.push_back(temp);
  }

  // Create our input string
  string input;

  // Create our copied input string
  string copyinput;

  // Ask the user to input the string
  cout << "Enter the input: ";
  cin >> input;

  // We then copy the input
  copyinput = input;

  // And make it all lowercase
  char wordchar;
  int s = 0;
  while (copyinput[s])
  {
    wordchar = copyinput[s];
    copyinput[s] = tolower(wordchar);
    s++;
  }
  

  // Until our copied input (aka manipulated input) is the word quit
  while (copyinput != "quit")
  { 
    // From 0 to 9...
    for (int i = 0; i < 9; i++){
      // If the input size is equal to our index
      if (input.size() == i+1){
        
        // We will push back the input into our vector of pointers
        vect[i]->push_back(input);

        // Go through our temp pointers
        vector<string> &temp = *vect[i];

        // Set a copy vector equal to our temp one
        vector<string> copy = temp;

        // Sort our copy vector
        sort (copy.begin(), copy.end());

        // Erase the portion of our temp vector afterf finding unique elements within our copy one
        temp.erase(unique(copy.begin(), copy.end()), copy.end());
        
      }
    }

    // Ask the user to input the string
    cout << "Enter the input: ";
    cin >> input;

    // We then copy the input
    copyinput = input;

    // And make it all lowercase
    char wordchar;
    int s = 0;
    while (copyinput[s])
    {
      wordchar = copyinput[s];
      copyinput[s] = tolower(wordchar);
      s++;
    }
    
  }

  // We then output the 2d vector using a double for loop...

  // Iterate through the 10 spaces for our vector
  for (int i = 0; i < 9; i++){

    // Create two counters. Check will be for the number of words, count will be for number of chars
    int check = 0;
    int count = 0;

    // Make check equal to the size of the outer vector + itself
    check = vect[i]->size() + check;
    
    // Go through our temp pointer 
    vector<string> &temp = *vect[i];
    
    // Iterate through each pointer
    for (int j = 0; j < temp.size(); j++)
    {
      // Make count equal to the size of the inner vector + itself
      count = temp[j].size() + count;
    }
    // Skippinng every inner pointer that isn't filled...
    if (temp.size() == 0){
      continue;
    }
    else{
      // We will ouput the count and check for each iteration
      cout << count << " " << check;
    }
    
    // Output an endl for each index
    cout << endl;
  }

  // End Program
  return 0;
}