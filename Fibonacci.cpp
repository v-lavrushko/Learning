#include "stdafx.h"
#include <iostream>
using namespace std;

int looking(long a, long b)
{
	do {
		a--;
		if (b%a == 0)
			continue;
	} while (a>1);
}
bool looking2(long a, long b)
{
	do {
		a--;
		if (b%a == 0) {
			return false;
			continue; }
		else
			return true;
	} while (a>1)
			
}
int main()
{
	long a(600851475143), b = a;
	a = looking(a, b);
	looking2 (a, a);
	if (looking2 == false)
		a = looking(a, b);
	else
		cout << "The answer is " << a << endl;
}