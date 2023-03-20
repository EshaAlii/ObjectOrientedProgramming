#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <vector>

using namespace std;

class Data 
{
  public:

  // Create an int vector called dataset
  vector<int> dataset;

  // Add Function
  void add(int number)
  {
    // Push back the passed number into our dataset
    dataset.push_back(number);
  }

  // Sort Function (Using BubbleSort)
  void sort()
  {
    // While we traverse the array...
    for (int i = 0;i < dataset.size() - 1; i++)
    {
      for (int j = 0; j < dataset.size() - i - 1; j++)
      {
        // If the element before the next one is greater
        if (dataset[j] > dataset[j+1])
        {
          // We will swap the two elements
          swap(dataset[j], dataset[j+1]);
        }
      }
    }
  }

  // Print Function
  void print()
  {
    // While we traverse the vector
    for (int i = 0; i < dataset.size(); i++)
    {
      // We will output the each element with a space
      cout << dataset[i] << " ";
    }

    // Add newline
    cout << endl;
  }

};

#endif