#ifndef ENTRY_H
#define ENTRY_H

#include <iostream>
#include <string>

using namespace std;

struct Entry
{
  // Define our first name, last name, and email variables
  string first_name;
  string last_name;
  string full_email;

  // Define our Entry constructor
  Entry()
  {
    // Make it equal to setName, setLastname, and setEmail
    setName(first_name);
    setLastname(last_name);
    setEmail(full_email);
  }

  // setName function
  void setName(string name)
  {
    // Make our first_name variable equal to name
    first_name = name;
  }

  // setLastname function
  void setLastname(string lastname)
  {
    // Make our last_name variable equal to lastname
    last_name = lastname;
  }

  // setEmail function
  void setEmail(string email)
  {
    // Make our full_email variable equal to email
    full_email = email;

  }

  // getName function
  string getName()
  {
    // Return our first_name
    return first_name;
  }

  // getLastname function
  string getLastname()
  {
    // Return our last_name
    return last_name;
  }

  // getEmail function
  string getEmail()
  {
    // Return our full_email
    return full_email;
  }

  // Print function
  void print()
  {
    // Set the following strings equal to our get (aka return) functions
    string firstname = getName();
    string lastname = getLastname();
    string email = getEmail();

    // Extra Spacing
    cout << endl;
    
    // Output the strings along with the indicators
    cout << "First Name: " << firstname << endl;
    cout << "Last Name: " << lastname << endl;
    cout << "Email: " << email << endl;

    // Extra Spacing
    cout << endl;
  }

};

#endif