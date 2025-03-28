#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Nhập N từ người dùng
    
    // Kiểm tra N hợp lệ (N > 0 và N ≤ 20)
    if (N <= 0 || N > 20) {
        cout << "N phai trong khoang 1 den 20!" << endl;
        return 1;
    }
    
    long long S = 0;    // Tổng S, dùng long long để tránh tràn số
    long long factorial = 1; // Biến lưu giai thừa từng bước
    
    // Tính tổng S
    for (int i = 1; i <= N; i++) {
        factorial *= i; // Tính i! (1 * 2 * ... * i)
        S += factorial; // Cộng i! vào tổng
    }
    
    // In kết quả
    cout << S << endl;
    
    return 0;
}