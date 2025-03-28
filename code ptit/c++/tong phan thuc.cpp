#include <iostream>
#include <iomanip> // Để sử dụng setprecision
using namespace std;

int main() {
    int N;
    double S = 0.0; // Biến lưu tổng, dùng double để lưu số thực
    
    // Nhập N từ người dùng
    cin >> N;
    
    // Kiểm tra N có hợp lệ không (N > 0)
    if (N <= 0) {
        cout << "N phai lon hon 0!" << endl;
        return 1;
    }
    
    // Tính tổng
    for (int i = 1; i <= N; i++) {
        S += 1.0 / i; // Chuyển i thành 1.0 để đảm bảo phép chia thực
    }
    
    // Xuất kết quả với 4 số phần thập phân
    cout << fixed << setprecision(4) << S << endl;
    
    return 0;
}