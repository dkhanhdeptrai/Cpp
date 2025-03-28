#include <iostream>
#include <algorithm> // Cho std::gcd
using namespace std;
// struct PhanSo để lưu tử số và mẫu số
struct PhanSo 
{
    long long tu, mau; 
};

// ct tim ucln 
long long gcd(long long a, long long b) 
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Hàm nhập phân số
void nhap(PhanSo &p) 
{
    cin >> p.tu >> p.mau;
}


PhanSo cong(const PhanSo &p1, const PhanSo &p2)  // truyền tham số vào hàm
{
    PhanSo ketQua;
    ketQua.tu = p1.tu * p2.mau + p2.tu * p1.mau; // Tử số của tổng
    ketQua.mau = p1.mau * p2.mau; // Mẫu số của tổng
    
    // Đơn giản hóa phân số
    long long g = gcd(abs(ketQua.tu), abs(ketQua.mau));
    ketQua.tu /= g; // chia tử số cho ước chung lớn nhất
    ketQua.mau /= g;

    // Đảm bảo mẫu số luôn dương
    if (ketQua.mau < 0) {
        ketQua.tu = -ketQua.tu;
        ketQua.mau = -ketQua.mau;
    }

    return ketQua;
}

// Hàm in phân số
void in(const PhanSo &p) //
{
    cout << p.tu << "/" << p.mau << endl;
}

int main() 
{
    PhanSo p1, p2;
    nhap(p1); // Nhập phân số đầu tiên (p1 tu p1 mau)
    nhap(p2); // Nhập phân số thứ hai (p2 tu p2 mau)
    in(cong(p1, p2));
    return 0;
}