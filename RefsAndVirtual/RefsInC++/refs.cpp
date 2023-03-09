#include <iostream>

using namespace std;

// Create our triple function and pass num by ref
void triple(int& num)
{
  // Set num equal to itself multiplied by 3
  num = num*3;
}

int main( int argc, const char * argv[] )
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	triple(num);

	cout << num << endl;

	return 0;
}