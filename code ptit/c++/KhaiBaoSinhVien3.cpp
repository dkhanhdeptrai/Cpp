#include <iostream>
#include <string>
#include <sstream> //
#include <iomanip>
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

    // Chuẩn hóa tên
    void chuanHoaTen() {
        // Chuyển toàn bộ tên về chữ thường
        for (char &c : hoTen) {
            c = tolower(c);
        }

        // Viết hoa chữ cái đầu mỗi từ
        bool isWordStart = true;
        for (char &c : hoTen) {//
            if (isWordStart && c != ' ') {
                c = toupper(c);// 
                isWordStart = false;
            }
            if (c == ' ') {//
                isWordStart = true;
            }
        }

        // Xóa khoảng trắng thừa
        stringstream ss(hoTen);
        string word, result;
        while (ss >> word) {
            if (!result.empty()) result += " ";
            result += word;
        }
        hoTen = result;
    }

    // Chuẩn hóa ngày sinh
    void chuanHoaNgaySinh() {
        stringstream ss(ngaySinh);
        string ngay, thang, nam;
        getline(ss, ngay, '/');   // Tách ngày
        getline(ss, thang, '/');  // Tách tháng
        getline(ss, nam, '/');    // Tách năm

        // Chuyển ngày, tháng về dạng 2 chữ số
        if (ngay.length() == 1) ngay = "0" + ngay;
        if (thang.length() == 1) thang = "0" + thang;

        // Ghép lại thành dạng dd/mm/yyyy
        ngaySinh = ngay + "/" + thang + "/" + nam;
    }

    // Chồng toán tử nhập >>
    friend istream& operator>>(istream &in, SinhVien &sv) {
        // Gán mã SV
        sv.maSV = "B20DCCN001";

        // Nhập thông tin còn lại
        getline(in, sv.hoTen);    // Nhập họ tên
        getline(in, sv.lop);      // Nhập lớp
        getline(in, sv.ngaySinh); // Nhập ngày sinh
        in >> sv.diemGPA;         // Nhập điểm GPA

        // Chuẩn hóa tên và ngày sinh
        sv.chuanHoaTen();
        sv.chuanHoaNgaySinh();

        // Xóa bộ đệm
        in.ignore();
        return in;
    }

    // Chồng toán tử xuất <<
    friend ostream& operator<<(ostream &out, const SinhVien &sv) {
        out << sv.maSV << " " << sv.hoTen << " " << sv.lop << " " << sv.ngaySinh << " ";
        out << fixed << setprecision(2) << sv.diemGPA; // Định dạng điểm GPA
        return out;
    }
};

int main() {
    SinhVien sv; // Khởi tạo đối tượng sinh viên
    cin >> sv;   // Nhập thông tin sinh viên
    cout << sv;  // In thông tin sinh viên
    return 0;
}