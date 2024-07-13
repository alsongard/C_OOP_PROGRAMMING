#include <iostream>

/*
 * swapping values of a and b
*/

using namespace std;
int main()
{
	int a = 1;
	int b = 2;
	//swapping values

	int c = a;
	cout << "Value of a before changing %d \n", &a;
	cout << "Value of b before changing %d \n", &b;

	a = b;
	b = c;
	cout << "Value of b after changing is : %d \n", &b;
	cout << "Value of a after changing is : %d \n", &a;

	return 0;
}
