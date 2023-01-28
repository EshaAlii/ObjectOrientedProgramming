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
	ifstream in("code.cpp");

  // Create a string called line
	string line;

  // We should get the line of each line of code
	while(getline(in, line))
  {
    // We then push it into the vector
    v.push_back(line);
  }

  // Add some extra spacing
  cout << endl;
  cout << endl;
  cout << endl;

  // State that this is the the original file
  cout << "-- Original File --" << endl;
  cout << endl;

	// We then output each line of the vector along with the number of the line
	for( int i = 0; i < v.size(); i++ )
  {
		cout << i << ": " << v[i] << endl;
  }

  // Add some extra spacing
  cout << endl;
  cout << endl;
  cout << endl;

  // State that this is the reversed file
  cout << "-- Reversed File --" << endl;
  cout << endl;

  // Create a j variable thats equal to zero
  int j = 0;

  // We then output each line of the vector along with the number of the line in reverse
  for (int i = v.size()-1; i >= 0; i--)
  {
    cout << i << ": " << v[j] << endl;

    // We increment j so we can keep the same lines while maintaining a reversed number order
    j++;
  }

  // Add some extra spacing
  cout << endl;
  cout << endl;
  cout << endl;

  // End Program
  return 0;
}