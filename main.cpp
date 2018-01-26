#include <iostream>

using namespace std;

void primes(unsigned long long int *arr2, unsigned long long int start, unsigned long long int end) {
    unsigned long long int arr1[25000], i = 2, k = 0;
    arr1[0] = 2;
    arr1[1] = 3;
    for (unsigned long long int x = 4; x < end + 1; x++) {
        for (unsigned long long int y = 0; arr1[y] * arr1[y] <= x; y++) {
            if (x % arr1[y] == 0) {
                goto next;
            }
        }
        arr1[i] = x;
        i++;
        next:
        continue;
    }
    while (arr1[k] <= start) {
        k++;
    }
    for (unsigned long long int j = 0; j<i; j++) {
        *(arr2+j) = arr1[j+k];
    }
}

int main() {
    unsigned long long int arr2[25000], s = 100000, e = 1000000000;
    primes(arr2, s, e);
    for (unsigned long long int n = 0; arr2[n] <= e && arr2[n] != 0; n++) {
        cout << arr2[n] << endl;
    }
    return 0;
}

