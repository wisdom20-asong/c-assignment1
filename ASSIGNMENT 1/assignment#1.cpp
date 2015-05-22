// program written to identify even or odd numbers
#include <iostream>
using namespace std;

bool isOdd( int integer);

int main ()
{
	int integer;
	//prompt user for integer and obtain integer
	
	cout << " please enter an integer "
	
	<< endl;
	
	cin >> integer;
	//determine if integer is odd or even
	
	if (isOdd(integer) == true )
	cout << integer << " is even. " << endl;
	
	else
	cout << integer << " is odd. " << endl;
	
	return 0;
	
}

bool isOdd ( int integer )
{
	
	if ( integer % 2== 0 )
	return true;
	else
	return false;
	
}
