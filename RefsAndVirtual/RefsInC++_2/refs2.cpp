#include <iostream>

using namespace std;

// Create our initialize_pint function and pass pnum and num by ref
void initialize_pint(int* &pnum, int& num)
{
  // Set pnum equal to the address of num
  pnum = &num;
}

int main( int argc, const char * argv[] )
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	int* pnum;
	initialize_pint(pnum, num);

	cout << *pnum << endl;

	return 0;
}