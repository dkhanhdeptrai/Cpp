#include <iostream>
#include <cctype> // Để sử dụng hàm isupper, tolower, toupper
using namespace std;

int main() {
    int t;
    cin >> t; // Nhập số bộ test
    
    for (int i = 0; i < t; i++) {
        char c;
        cin >> c; // Nhập một chữ cái
        
        if (isupper(c)) { // Kiểm tra xem có phải chữ hoa không
            cout << (char)tolower(c) << endl; // Chuyển thành chữ thường
        } else if (islower(c)) { // Kiểm tra xem có phải chữ thường không
            cout << (char)toupper(c) << endl; // Chuyển thành chữ hoa
        } else {
            cout << c << endl; // Nếu không phải chữ cái, in nguyên ký tự
        }
    }
    
    return 0;
}