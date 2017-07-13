#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	long a(1), b(0), c(0), d(0);
	do {
		cout << a << " ";
		c = a;
		a = a + b;
		b = c;
		if (a % 2 == 0)
			d = a + d;
		else
			d = d;
	} while (a < 4000000);
	cout << endl << "The ansver is " << d << endl;
}
