#ifndef TIME_H
#define TIME_H

#include <iostream>

using namespace std;

class Time
{
  public:

  // Member variables of Time
  int hours;
  int minutes;
  int seconds;

  // Default Constructor
  Time()
  {
    // Set member variables equal to 0
    hours = 0;
    minutes = 0;
    seconds = 0;
  }

  // Secondary Constructor
  Time(int hoursEntered, int minutesEntered, int secondsEntered)
  {
    // Set member variables equal to passed parameters
    setHours(hoursEntered);
    setMinutes(minutesEntered);
    setSeconds(secondsEntered);
  }

  // Accessor functions
  void setHours(int hoursSet)
  {
    hours = hoursSet;
  }
  void setMinutes(int minutesSet)
  {
    minutes = minutesSet;
  }
  void setSeconds(int secondsSet)
  {
    seconds = secondsSet;
  }

  // Mutator functions
  int getHours()
  {
    return hours;
  }
  int getMinutes()
  {
    return minutes;
  }
  int getSeconds()
  {
    return seconds;
  }

  // Time Operator Addition Overload
  Time operator+(const Time& time)
  {
    // Create our Time addition variable 
    Time addition;

    // For each member variable of addiiton, set it equal to the addition of passed time member variables and current instance of member variables
    addition.hours = time.hours + this->hours;
    addition.minutes = time.minutes + this->minutes;
    addition.seconds = time.seconds + this->seconds;

    // If the sum of our time exceeds or is equal to 60 seconds... 
    if (addition.seconds >= 60)
    {
      // We will decrement it from addition.seconds
      addition.seconds = addition.seconds - 60;

      // And increment addition.minutes
      addition.minutes++;
    }

    // If the sum of our time exceeds or is equal to 60 minutes...
    if (addition.minutes >= 60)
    {
      // We will decrement it from addition.minutes
      addition.minutes = addition.minutes - 60;

      // And increment addition.hours
      addition.hours++;
    }

    // If the sum of our time exceeds or is equal to 24 hours...
    if (addition.hours >= 24)
    {
      // We will decrement it from addition.hours
      addition.hours -= 24;
    }

    // We will return addition
    return addition;
  }

  // Prefix Increment Operator Overload
  Time& operator++()
  {
    // We increment our hours
    hours++;

    // And return the current instance of our incrememnted hours
    return *this;
  }

  // Postfix Increment Operator Overload
  Time operator++(int)
  {
    // We then create a copy of the returned instance
    Time increment(*this);

    // Increment the hours member variable of our current instance
    hours++;

    // And return the copy that was created before the increment
    return increment;
  }

  // Print Function
  void print()
  {
    // Print out hours, minutes, and seconds with comma to separate
    cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
  }

  // Destructor
  ~Time()
  { 
    // Empty Destructor
  }

};

#endif