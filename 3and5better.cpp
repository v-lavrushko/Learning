#include "stdafx.h"
#include <iostream>
using namespace std;

long sum(long a, long b)
{
	if (a < 1000)
		return (a + sum(a + b, b));
	else
		return 0;
}
int main()
{
	long a = 3, b = 5, c = 15;
	cout << "The ansver is " << sum(a,3)+sum(b,5)-sum(c,15) << endl;
}