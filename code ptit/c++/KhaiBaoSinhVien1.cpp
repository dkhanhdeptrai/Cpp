#include <iostream>
#include <string>
#include <iomanip>
#include <sstream> 
using namespace std;

// Lớp SinhVien
class SinhVien {
private:
    string maSV, hoTen, lop, ngaySinh;
    float diemGPA;

public:
    // Hàm khởi tạo không tham số
    SinhVien() {
        maSV = "";
        hoTen = "";
        lop = "";
        ngaySinh = "";
        diemGPA = 0.0;
    }

    // Chuẩn hóa ngày sinh
    void chuanHoaNgaySinh() {
        stringstream ss(ngaySinh);
        string ngay, thang, nam;
        getline(ss, ngay, '/');
        getline(ss, thang, '/');
        getline(ss, nam, '/');
        if (ngay.length() == 1) ngay = "0" + ngay;
        if (thang.length() == 1) thang = "0" + thang;
        ngaySinh = ngay + "/" + thang + "/" + nam; // Ghép lại thành dạng dd/mm/yyyy
    }

    // Hàm nhập thông tin sinh viên
    void nhap() {
        maSV = "B20DCCN001";
        getline(cin, hoTen);
        getline(cin, lop);
        getline(cin, ngaySinh);
        cin >> diemGPA;
        chuanHoaNgaySinh();
        cin.ignore(); // Xóa bộ đệm
    }

    // Hàm xuất thông tin sinh viên
    void xuat() const {
        cout << maSV << " " << hoTen << " " << lop << " " << ngaySinh << " ";
        cout << fixed << setprecision(2) << diemGPA << endl;
    }
};

int main() {
    SinhVien sv; // Khởi tạo đối tượng sinh viên
    sv.nhap();   // Nhập thông tin sinh viên
    sv.xuat();   // In thông tin sinh viên
    return 0;
}