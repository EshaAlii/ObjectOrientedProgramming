#include <iostream>
#include <string>

#include "Data.h"
#include "Circle.h"
#include "Participant.h"

using namespace std;

int main( int argc, const char* argv[] )
{
  // Intialize our data type
	Data myData;

  // User entered character
  char enter;

  // User entered radius (for Circle)
  int radius;

  // User entered name, age, and score (for Participant)
  string name;
  int age;
  int score;

  // Ask the user to enter a character
  cin >> enter;

  // Until the user enters q or Q to quit the program...
  while (enter != 'q' && enter != 'Q')
  {
    // If the character is c or C, indicating a circle...
    if ((enter == 'c' || enter == 'C'))
    {

      // We will ask the user for the radius of the circle
      cin >> radius;

      // And add the new circle to our Data
      myData.add(new Circle(radius));

      // We will then let the user know that the circle was added
      cout << "Circled added" << endl;
    }

    // If the character is c or C, indicating a participant...
    if ((enter == 't' || enter == 'T'))
    {

      // We will ask the user for the name, age, and score of the particpant
      cin >> name;
      cin >> age;
      cin >> score;

      // And add the new participant to our Data
      myData.add(new Participant(name, age, score));

      // We will then let the user know that the participant was added
      cout << "Participant added" << endl;
    }

    // If the character is s or S, indicating we want to sort the Data...
    if ((enter == 's' || enter == 'S'))
    {
      // We will sort the Data
      myData.sort();

      // We will then let the user know that the Data was sorted
      cout << "Data sorted" << endl;
    }

    // If the character is p or P, indicating we want to print the Data...
    if ((enter == 'p' || enter == 'P'))
    {
      // We will print the Data
      myData.print();
    }

    // We will then take input again
    cin >> enter;
  }

  // End Program
	return 0;
}