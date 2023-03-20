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
    // Dynamic casting
    const Participant* participant = dynamic_cast<const Participant*>(sorted);
    
    // If our score is greater than the "new" participant's score
    if (score > participant->score) 
    {
      // We'll return true
      return true;
    } 
    
    // Otherwise if the scores are the same and the ages of the "new" particpant is younger than our current...
    else if (age < participant->age && score == participant->score ) 
    {
      // We'll return true
      return true;
    } 
    
    // Otherwise if the score and the age are the same and the name of the "new" participant is "greater" than our current...
    else if (name < participant->name && age == participant->age && score == participant->score)
    {
      // We'll return true
      return true;
    }

    // Otherwise we'll return false
    return false;
  }

  // Virtual Print function
  virtual void print(){

    // Print out the name, age, and score using tabs
    cout << name << "\t" <<  age << "\t" << score << endl;
  }

};

#endif
