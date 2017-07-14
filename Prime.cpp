#include "stdafx.h"
#include <iostream>
using namespace std;

int prime(long a,long b)
{
	do {
		if (a%b == 0) {
			prime(a/b, b);
		}
		else 
			prime (a, b + 1);
	} while (a > b);
	return b;
}

int main()
{
	long ans = prime(600851475143, 2);
	cout << "The answer is " << ans << endl;
}