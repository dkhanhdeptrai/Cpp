#include <iostream>
using namespace std;


bool isIncreasing(int n) {
    int lastDigit = n % 10;
    n /= 10;
    while (n > 0) {
        int currentDigit = n % 10;
        if (currentDigit >= lastDigit) return false;
        lastDigit = currentDigit;
        n /= 10;
    }
    return true;
}

bool isDecreasing(int n) {
    int lastDigit = n % 10;
    n /= 10;
    while (n > 0) {
        int currentDigit = n % 10;
        if (currentDigit <= lastDigit) return false;
        lastDigit = currentDigit;
        n /= 10;
    }
    return true;
}
int countIncreasingDecreasing(int n) {
    int count = 0;
    
    int start = 1;
    int end = 1;
    for(int i = 0; i < n; i++) {
        end *= 10;
    }


    for(int i = start; i < end; i++) {
        if(isIncreasing(i) || isDecreasing(i)) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countIncreasingDecreasing(n) << endl;
    return 0;
}
