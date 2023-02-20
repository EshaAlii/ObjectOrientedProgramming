#ifndef LINKED_H
#define LINKED_H
#include <iostream>
using namespace std;

struct LinkedList 
{
	struct Link 
  {
		void* data;
		Link* next;
		
		void initialize(void* dat, Link* nxt)
    {
			data = dat;
			next = nxt;
		}
	}* head; 

  LinkedList(void* dat, Link* nxt)
  {
    // Intialize our head as a new link
    head = new Link;

    // Intialize the head
    head->initialize(dat, nxt);
  }

  
	void add(LinkedList::Link* l, int n)
  {
    // Until we reach our entered number
    for (int i = 0; i < n; i++)
    {
      // We will declare our current link l equal to our head
      l->next = new Link;

      // We will then initialize it to have a data type of i (basically prints out 0-4) and its next link to be a new link (also doing pointer to next outputs 47.1)
      l->next->initialize(new double(i), new Link);

      // We will then have l point to the new link
      l = l->next;
    }
  }

	void print()
  {
    // Create a Link called adjacent
    Link *adj;

    // Set that equal to our head
    adj = head;

    // Until we make adjacent 0
    while (adj->data != 0)
    {
      // Output our adjacent node's data
      cout <<  *((double*)adj->data) << endl;

      // Move our adjacent to our next node
      adj = adj->next;
    }
  }

  // Cleanup function
	void cleanup()
  {
    // If the head (aka front of the linked list isn't 0)
    while (head !=0)
    {
      // We will create a new link called old and set it equal to our head
      Link* old = head;

      // We will then move our head to the next adjacent node
      head = head->next;

      // And delete our old head
      delete old;
    }

    // And once the head eventually reaches 0
    if (head == 0)
    {
      
      // We will say the Linked List is empty
      cout << "Linked List has been emptied" << endl;
    }
      
  }

};


#endif