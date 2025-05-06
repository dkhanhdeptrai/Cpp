#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    // Calculate the number of odd numbers from 1 to n
    long long k = (n + 1) / 2;

    // Sum of odd numbers from 1 to n
    long long sum = k * k;

    cout << sum << endl;
    return 0;
}