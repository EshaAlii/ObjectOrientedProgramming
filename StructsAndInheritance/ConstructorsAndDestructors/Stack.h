#ifndef STACK_H
#define STACK_H

#include <iostream>

struct Stack {
	struct Link {
		double data;
		Link* next;
		
		void initialize(double dat, Link* nxt) {
			data = dat;
			next = nxt;
		}
	}* head;

  // Default Constructor (no Parameters passed)
  Stack()
  {
    // Assume the head is NULL
    head = NULL;
  }

  // Stack Constructor (Passing our parameter n)
  Stack(int n)
  {
    // Create our count variable
    int count = 0;

    // Create our increment variable
    double inc = 1.0;

    // Until our count reaches our size of n
    while (count != n)
    {
      // We will push the increment
      push(inc);

      // Increment our count
      count++;

      // And increment our increment by 0.1
      inc = inc + 0.1;
    }
  }

  // Destructor
  ~Stack(){
    // While the head is not empty
    while (head != NULL)
    {
      // For every popped number...
      double poppednum = pop();

      // We will want to output it
      std::cout << poppednum << " ";
    }
  }
	
	void initialize() {
		head = 0;
	}
	
	void push(double dat) {
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	double peek() {
		if (head == 0) {
			std::cout << "Stack is empty";
		}
		return head->data;
	}
	
	double pop() {
		if(head == 0)
			return 0;
		
		double result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}
	
	void cleanup() {
		if (head == 0){
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty";
		}
	}
};

#endif
