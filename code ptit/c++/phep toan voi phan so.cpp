#include <iostream>
#include <algorithm>
using namespace std;

struct PhanSo 
{
    long long tu, mau;

    void rutGon() 
    {
        long long g = __gcd(abs(tu), abs(mau));
        tu /= g;
        mau /= g;
    }

    void inPhanSo() 
    { 
        cout << tu << "/" << mau << " ";
    }
};

PhanSo tinhC(const PhanSo &A, const PhanSo &B) 
{
    PhanSo C;
    C.tu = (A.tu * B.mau + B.tu * A.mau) * (A.tu * B.mau + B.tu * A.mau);
    C.mau = A.mau * B.mau * A.mau * B.mau;
    C.rutGon();
    return C;
}
PhanSo tinhD(const PhanSo &A, const PhanSo &B, const PhanSo &C) 
{
    PhanSo D;
    D.tu = A.tu * B.tu * C.tu;
    D.mau = A.mau * B.mau * C.mau;
    D.rutGon();
    return D;
}

void xuly() 
{ 
    long long A_tu, A_mau, B_tu, B_mau;
    cin >> A_tu >> A_mau >> B_tu >> B_mau;

    PhanSo A = {A_tu, A_mau};
    PhanSo B = {B_tu, B_mau};

    PhanSo C = tinhC(A, B);
    PhanSo D = tinhD(A, B, C);

    C.inPhanSo();
    D.inPhanSo();
    cout << endl;
}
int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        xuly();
    }
    return 0;
}