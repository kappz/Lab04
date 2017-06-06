#include "Vector.h"
#include <iostream>
#include <istream>
#include <ostream>
using namespace std;

// function implementations

/*
Author: Peter O'Donohue
Creation Date: 06/01/17
Modification Date: 06/01/2017
Description: creates a vector with no default size
*/

Vector::Vector()
{
	size = 0;
	entries = nullptr;
}

/*
Author: Peter O'Donohue
Creation Date: 06/01/17
Modification Date: 06/01/2017
Description: creates a dynamic array of size s 
*/
Vector::Vector(int s)
{
	// PRE: an object of type 'Vector' was created with default value of 's' being passed through
	// POST: a dynamic array of size 's' was created with all of its elemnents initialized with zero.

	size = s;  // sets size data member equal to the value set when created a Vector object
	entries = new int[size];  // allocate memory into a dynamic array with pointers
	for (int i = 0; i < size; ++i)
	{
		entries[i] = 0;  // initialize array elements to zero
	}
	return;
}
/*
Author: Peter O'Donohue
Creation Date: 06/01/17
Modification Date: 06/01/2017
Description: copy the vector
*/
Vector::Vector(const Vector& other)
{
	size = other.size;
	int *copy;
	copy = nullptr;
	copy = new int[size];
	for (int i = 0; i < size; ++i)
	{
		copy[i] = other.entries[i];
	}

}

/*
Author: Peter O'Donohue
Creation Date: 06/01/17
Modification Date: 06/01/2017
Description: destructor
*/
Vector::~Vector()
{
	delete entries;
}

/*
Author: Peter O'Donohue
Creation Date: 06/05/17
Modification Date: 06/05/2017
Description: cout << operator overload
*/
ostream& operator<<(ostream &out, Vector rhs)
{
	cout << "[ ";
	for (int i = 0; i < rhs.size; ++i)
	{
		out << rhs.entries[i] << " ";
	}
	cout << " ]";
	return out;
}

/*
Author: Peter O'Donohue
Creation Date: 06/05/17
Modification Date: 06/05/2017
Description: fill array elements from user input
*/
void Vector::get()
{
	for (int i = 0; i < size; ++i)
	{
		cout << "Please enter 3 integers that will represent the 3 values in your first set: ";
		cin >> entries[i];
	}
	return;
}
