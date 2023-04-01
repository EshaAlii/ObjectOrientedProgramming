#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <vector>
#include "Sortable.h"

using namespace std;

class Data : public Sortable
{
  public:

  // Create an int vector called dataset
  vector<Sortable*> dataset;

  // Add Function
  void add(Sortable* number)
  {
    // Push back the passed number into our dataset
    dataset.push_back(number);
  }

  // Sort Function
  void sort()
  {
    // While we traverse the array...
    for (int i = 0;i < dataset.size() - 1; i++)
    {
      for (int j = 0; j < dataset.size() - i - 1; j++)
      {
        // If the element before the next one is greater
        if (dataset[j+1]->compare(dataset[j]))
        {
          // We will swap the two elements
          swap(dataset[j], dataset[j+1]);
        }
      }
    }
  }

  // Bool Compare
  bool compare(const Sortable* sorted){

    // Automatically return false
    return false;
  }

  // Print Function
  void print()
  {
    // While we traverse the vector
    for (int i = 0; i < dataset.size(); i++)
    {

      // We will output the each element with print()
      dataset[i]->print();
    }
  }

};

#endif