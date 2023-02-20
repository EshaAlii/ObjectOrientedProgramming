#ifndef TEST_H
#define TEST_H

#include <iostream>
#include "Entry.h"

struct AddressBook
{
  // Create our AddressBook pointers
  AddressBook *next; // points to the next "part" of address book
  AddressBook *point; // points throughout our addressbook

  // Create our entry
  Entry entry;

  // AddressBook Constructor
  AddressBook(string first, string last, string e_mail)
  {
    // Set the first name, last name, and email of our entries accordingly
    entry.setName(first);
    entry.setLastname(last);
    entry.setEmail(e_mail);

    // Set next equal to NULL
    next = NULL;

    // Set point equal to this (beginning of our entry)
    point = this;
  }

  // Add function
  void add(AddressBook* current)
  {
    // While our point, which poitns to the next node isn't empty (filled with an entry)
    while (point->next != NULL)
    {
      // We want it to point to the next next node
      point = point->next;
    }
    // And then make that next node equal to our current entry
    current = point->next;
  }

  // Print function
  void print()
  {
    // Until our point reaches an empty node (aka a place where no more entries are)
    while(point != NULL)
    {
      // We will print out the entry at that specific area
      point->entry.print();

      // And then make our node point to the next part
      point = point->next;
    }
  }
  
};


#endif