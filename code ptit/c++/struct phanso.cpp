#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

// Định nghĩa cấu trúc PhanSo
struct PhanSo {
    long long tu, mau; // Tử số và mẫu số
};

// Hàm nhập phân số
void nhap(PhanSo &p) { // Truyền biến tham chiếu
    cin >> p.tu >> p.mau; // Nhập tử số và mẫu số
}

// Hàm rút gọn phân số
void rutgon(PhanSo &p) { // Truyền biến tham chiếu
    long long g = __gcd(p.tu, p.mau); // Tìm ước chung lớn nhất của tử số và mẫu số
    p.tu /= g; // Chia tử số cho ước chung lớn nhất
    p.mau /= g; // Chia mẫu số cho ước chung lớn nhất
}

// Hàm in phân số
void in(PhanSo p) { // Truyền biến tham trị
    cout << p.tu << "/" << p.mau; // In phân số dưới dạng tử số/mẫu số
}

int main() {
    PhanSo p;
    nhap(p); // Nhập phân số
    rutgon(p); // Rút gọn phân số
    in(p); // In phân số đã rút gọn
    return 0;
}