#include <iostream>
using namespace std;

// Hàm kiểm tra số lộc phát
bool isLocPhat(long long n) {
    // Nếu n = 0 thì không phải số lộc phát (theo định nghĩa cần số dương)
    if (n == 0) return false;
    
    // Kiểm tra từng chữ số
    while (n > 0) {
        int digit = n % 10; // Lấy chữ số cuối
        if (digit != 0 && digit != 6 && digit != 8) {
            return false; // Nếu có chữ số khác 0, 6, 8 thì không phải
        }
        n /= 10; // Bỏ chữ số cuối
    }
    return true; // Nếu tất cả chữ số đều là 0, 6, 8 thì đúng
}

int main() {
    int t;
    cin >> t; // Nhập số bộ test
    
    // Xử lý từng bộ test
    for (int i = 0; i < t; i++) {
        long long n;
        cin >> n; // Nhập số cần kiểm tra (dùng long long để chứa số đến 9 chữ số)
        
        // Kiểm tra và in kết quả
        if (isLocPhat(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}