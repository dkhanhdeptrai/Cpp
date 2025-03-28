#include <iostream>
#include <string>
using namespace std;
struct NhanVien {
    string hoTen;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string maSoThue;
    string ngayKyHopDong;
};
istream& operator>>(istream& in, NhanVien& nv) { //
    getline(in, nv.hoTen);         
    getline(in, nv.gioiTinh);       
    getline(in, nv.ngaySinh);     
    getline(in, nv.diaChi);         
    getline(in, nv.maSoThue);      
    getline(in, nv.ngayKyHopDong);  
    return in;
}
ostream& operator>>(ostream& out, const NhanVien& nv) {
    out << "00001 " << nv.hoTen << " " << nv.gioiTinh << " " << nv.ngaySinh
        << " " << nv.diaChi << " " << nv.maSoThue << " " << nv.ngayKyHopDong;
    return out;
}
int main(){
    NhanVien a;
    cin >> a;  
    cout >> a; 
    return 0;
}


