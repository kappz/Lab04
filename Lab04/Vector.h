#pragma once
#ifndef VECTOR_H
#define VECTOR_H
#include <ostream>
using namespace std;
class Vector
{
public:
	Vector(); // default constructor
	Vector(int s); // makes size = s,
				   // allocates space for s elements,
				   // makes all entries 0
    Vector(const Vector& other); // copy constructor
	~Vector(); // destructor
	friend ostream& operator << (ostream &out, Vector rhs);// Prints out the vector
	void get(); // reads in an entire vector from
				// the keyboard
//	Vector operator+ (const Vector &other) const; // adds two vectors
//	Vector operator= (const Vector & other); // Uses a deep copy
private:
	int size; //sets the # of elements used
	int *entries; //the entries into the vector
};
#endif