#ifndef STACK_H
#define STACK_H

#include <iostream>

struct Stack {
	struct Link {
		void* data;
		Link* next;
		
		void initialize(void* dat, Link* nxt){
			data = dat;
			next = nxt;
		}
	}* head;
	
	void initialize(){
		head = 0;
	}
	
	void push(void* dat){
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	void* peek(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
		return head->data;
	}
	
	void* pop(){
		if(head == 0)
			return 0;
		
		void* result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}
	
	void cleanup()
  {
    
    // While we still have a full stack (aka traversing the stack)
    while (head != NULL)
    {
      // We set the node we want to delete equal to our head
      Link* deleted = head;

      // We will then call the delete callback once for each stored void pointer
      deletecb(deleted->data);

      // We will then point to the next head of the node
      head = head->next;

      // And then delete the node we wanted deleted
      delete deleted;
    }

    // If our stack is empty
		if (head == 0)
    {
      
      // We will say it is empty
			std::cout << "Stack is empty"<< std::endl;
		}
		else 
    {
      // Otherwise we will say it's not
			std::cout << "Stack is not empty" << std::endl;
		}
	}

  // Declare our member function deletecb
  void (*deletecb) (void* pt);

  // Define our member function
  void setDeleteCallback (void(*delcb) (void* pt))
  {
    // Set deletecb equal to our void pointer delcb
    deletecb = delcb;
  }

};
#endif