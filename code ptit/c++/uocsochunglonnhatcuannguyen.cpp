#include <stdio.h>

// Hàm tính UCLN (ước chung lớn nhất) bằng thuật toán Euclid
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Hàm tính BSCNN (bội số chung nhỏ nhất) của hai số
long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

// Hàm tính BSCNN của các số từ 1 đến n
long long findLCM(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result = lcm(result, i);
    }
    return result;
}

int main() {
    int T;
    scanf("%d", &T); // Nhập số lượng test case

    // Xử lý từng test case
    for (int t = 0; t < T; t++) {
        int n;
        scanf("%d", &n); // Nhập giá trị n cho test case hiện tại
        long long result = findLCM(n); // Tính BSCNN
        printf("%lld\n", result); // In kết quả
    }

    return 0;
}