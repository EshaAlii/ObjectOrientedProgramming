#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  // Create a vector called v
	vector<string> v;

  // Read the file code.cpp
	ifstream in( "code.cpp" );

  // Create a string called line
	string line;

  // Extract the entire input into our string (excluding whitespaces)
	while(in >> line)
  {
    // We then push it into the vector
    v.push_back(line);
  }

  // Add some extra spacing
  cout << endl;
  cout << endl;
  cout << endl;

  // State that this is the the Concatenated file
  cout << "-- Concatenated File --" << endl;
  cout << endl;

  // // We then output each line of the vector, which should give us the Concatenated file
	for( int i = 0; i < v.size(); i++ )
  {
		cout << v[i];
  }
  cout << endl;

  // Add some extra spacing
  cout << endl;
  cout << endl;
  cout << endl;

  // End Program
  return 0;
  
}