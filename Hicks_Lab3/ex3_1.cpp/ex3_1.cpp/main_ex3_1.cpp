// ex3_1.cpp - This program creates to pointers, sets their values, then adds them, and copies one
// Joseph Hicks
// September 16, 2022
#include <iostream>
using namespace std;

int main()
{
	// Creates pointers
	int* p1;
	int* p2;

	// Sets them to dynamic variables
	p1 = new int;
	p2 = new int;

	// Assigns their values
	*p1 = 30;
	*p2 = 50;

	// First Output
	cout << "p1 = " << *p1 << endl;
	cout << "p2 = " << *p2 << endl;
	cout << endl;

	// Adds them to p1
	*p1 += *p2;

	// Second Output
	cout << "p1 + p2 = " << *p1 << endl;
	cout << endl;

	// Copies p1 to p2
	*p2 = *p1;

	// Final Output
	cout << "p1 = " << *p1 << endl;
	cout << "p2 = " << *p2 << endl;
	return 0;
}