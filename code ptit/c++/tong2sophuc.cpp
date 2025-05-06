#include <iostream>
using namespace std;

struct SoPhuc {
    int thuc, ao;

    // Constructor khởi tạo giá trị
    SoPhuc(int thuc = 0, int ao = 0) : thuc(thuc), ao(ao) {}
};

// Nạp chồng toán tử >> để nhập
istream& operator>>(istream& in, SoPhuc& sp) {
    in >> sp.thuc >> sp.ao;
    return in;
}

// Nạp chồng toán tử << để xuất
ostream& operator<<(ostream& out, const SoPhuc& sp) {
    out << sp.thuc << " + " << sp.ao << "i";
    return out;
}

// Nạp chồng toán tử + để cộng hai số phức
SoPhuc operator+(const SoPhuc& a, const SoPhuc& b) {
    return SoPhuc(a.thuc + b.thuc, a.ao + b.ao);
}

int main() {
    SoPhuc p(2, 3), q(4, 5);
    cin >> p >> q;
    cout << p + q;
    return 0;
}
