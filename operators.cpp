#include <iostream>
/*
 *
 *
 *
 *
*/
using namespace std;
int main()
{
	int x = 10;
	int y = 3;
	int z = x / y;
	cout << z << endl;

	//output a decimal value
	double val = 20;

	double valz = val / y;
	cout << valz << endl;

	//incrementing values
	//using postfix
	int valX = 1;
	int valY = valX++;
	cout << "Value of valY is " << valY << endl;
	cout << "Value of valX is " << valX << endl;

	//using prefix
	int numX = 9;
	int numY = ++numX;
	cout << "Value of numX is " << numX << endl;
	cout << "Value of numY is " << numY << endl;

	return 0;
}

