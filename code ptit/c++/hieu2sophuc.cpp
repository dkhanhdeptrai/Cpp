#include <iostream>
using namespace std;

struct SoPhuc {
    int thuc, ao;

    SoPhuc(int thuc = 0, int ao = 0) : thuc(thuc), ao(ao) {}
};

// Nhập số phức
istream& operator>>(istream& in, SoPhuc& sp) {
    in >> sp.thuc >> sp.ao;
    return in;
}

// Xuất số phức
ostream& operator<<(ostream& out, const SoPhuc& sp) {
    if (sp.ao >= 0)
        out << sp.thuc << " + " << sp.ao << "i";
    else
        out << sp.thuc << " - " << -sp.ao << "i"; // hiển thị đúng dấu -
    return out;
}
// Trừ số phức
SoPhuc operator-(const SoPhuc& a, const SoPhuc& b) {
    return SoPhuc(a.thuc - b.thuc, a.ao - b.ao);
}

int main() {
    SoPhuc p(2, 3), q(4, 5);
    cin >> p >> q;
    cout << p - q << endl;
    return 0;
}
