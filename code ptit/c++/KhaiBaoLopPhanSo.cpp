#include <iostream>
using namespace std;
class PhanSo {
private:
    long long tuSo, mauSo;
    long long gcd(long long a, long long b) {
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
public:
    PhanSo(long long tu = 1, long long mau = 1) {
        tuSo = tu;
        mauSo = mau;
    }
    void rutgon() {
        long long ucln = gcd(tuSo, mauSo);
        tuSo /= ucln;
        mauSo /= ucln;
    }
    friend istream& operator>>(istream& in, PhanSo& ps) {
        in >> ps.tuSo >> ps.mauSo;
        return in;
    }
    friend ostream& operator<<(ostream& out, PhanSo& ps) {
        out << ps.tuSo << "/" << ps.mauSo;
        return out;
    }
};
int main() {
    PhanSo p(1, 1);  
    cin >> p;         
    p.rutgon();       
    cout << p;       
    return 0;
}

