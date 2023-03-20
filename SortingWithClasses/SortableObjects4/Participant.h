#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include "Sortable.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Participant : public Sortable 
{ 
  public:
  // Define our variables
  string name;
  int age;
  double score;

  // Static Bool Function
  static bool (*comp_cb)(const Participant*, const Participant*);

  // Default constructor
  Participant()
  {
    // Initialize name as something generica and age and score as 0
    name = "Bob";
    age = 0;
    score = 0;
  }

  // Secondary Constructor
  Participant(string enteredname, int enteredage, double enteredscore)
  {
    // Initialize passed parameters as our variables
    name = enteredname;
    age = enteredage;
    score = enteredscore;
  }

  // Virtual bool Compare function
  virtual bool compare(const Sortable* sorted)
  {
    // Return our comp_cb 
    return comp_cb(this, (Participant*)sorted); 
  }

  // Virtual Print function
  virtual void print(){

    // Print out the name, age, and score using tabs
    cout << name << "\t" <<  age << "\t" << score << endl;
  }

};

#endif
