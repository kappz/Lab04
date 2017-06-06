#include "Vector.h"
#include <iostream>
using namespace std;
int main()
{
	Vector a,b(3),c(3);
	b.get(); // user enters 1 2 3
	c.get(); // user enters -2 1 0 
	cout << b;
//	a = b + c;
//	cout << "The sum of " << b << "and" << c << " is " << a << endl;
	system("pause");
	return 0;
}