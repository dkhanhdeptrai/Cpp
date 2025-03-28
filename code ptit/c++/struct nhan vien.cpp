#include <iostream>
#include <string>


using namespace std;

struct NhanVien {
    string maNV, hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKyHopDong;
};

void nhap(NhanVien &nv) {
    getline(cin, nv.hoTen);
    getline(cin, nv.gioiTinh);
    getline(cin, nv.ngaySinh);
    getline(cin, nv.diaChi);
    getline(cin, nv.maSoThue);
    getline(cin, nv.ngayKyHopDong);
    nv.maNV = "00001";
}

void in(const NhanVien &nv) {
    cout << nv.maNV << " " << nv.hoTen << " " << nv.gioiTinh << " " 
         << nv.ngaySinh << " " << nv.diaChi << " " << nv.maSoThue << " " 
         << nv.ngayKyHopDong << endl;
}

int main() {
    NhanVien nv;
    nhap(nv);
    in(nv);
    return 0;
}