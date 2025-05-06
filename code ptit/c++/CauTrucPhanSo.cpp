#include <iostream>
using namespace std;

// Cấu trúc PhanSo
struct PhanSo {
    long long tu; // Tử số
    long long mau; // Mẫu số
}

// Hàm tìm UCLN (sử dụng thuật toán Euclid)
long long UCLN(long long a, long long b) {
    a = abs(a); // Đảm bảo số dương
    b = abs(b); // Đảm bảo số dương
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Hàm rút gọn phân số
void rutGon(PhanSo &ps) {
    // Tìm UCLN của tử và mẫu
    long long ucln = UCLN(ps.tu, ps.mau); 
    // Chia tử và mẫu cho UCLN
    ps.tu /= ucln;
    ps.mau /= ucln;
    // Đảm bảo mẫu số luôn dương
    if (ps.mau < 0) {
        ps.tu = -ps.tu;
        ps.mau = -ps.mau;
    }
}

// Hàm nhập phân số
void nhapPhanSo(PhanSo &ps) {
    cin >> ps.tu >> ps.mau; // Nhập tử số và mẫu số
    // Đảm bảo mẫu số dương (theo đề bài)
    if (ps.mau <= 0) {
        ps.mau = 1; // Gán mẫu số mặc định là 1 nếu không hợp lệ
    }
    rutGon(ps); // Rút gọn phân số
}

// Hàm in phân số
void inPhanSo(const PhanSo &ps) {
    cout << ps.tu << "/" << ps.mau; // In dạng tu/mau
}

int main() {
    PhanSo ps; // Khởi tạo đối tượng phân số
    nhapPhanSo(ps); // Nhập phân số
    inPhanSo(ps);   // In phân số đã rút gọn
    return 0;
}