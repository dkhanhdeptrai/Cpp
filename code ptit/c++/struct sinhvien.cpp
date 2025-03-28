#include <bit/stdc++.h> // Để sử dụng setprecision

using namespace std;

// Định nghĩa struct SinhVien để lưu thông tin sinh viên
struct SinhVien {
    string maSV;    // Mã sinh viên (B20DCCNxxx)
    string hoTen;   // Họ tên
    string lop;     // Lớp
    string ngaySinh; // Ngày sinh (dd/mm/yyyy)
    float gpa;      // Điểm GPA
};

// Hàm tạo Mã SV (tăng dần từ B20DCCN001)
string taoMaSV(int &count) {
    count++; // Tăng số thứ tự
    string ma = "B20DCCN";
    if (count < 10) {
        ma += "00" + to_string(count);
    } else if (count < 100) {
        ma += "0" + to_string(count);
    } else {
        ma += to_string(count); // Xử lý nếu vượt 999 (ít khả năng xảy ra trong bài)
    }
    return ma;
}

// Hàm nhập thông tin sinh viên
void nhap(SinhVien &sv, int &count) {
    // Nhập họ tên (không quá 30 ký tự, nhưng không cần kiểm tra vì bài không yêu cầu)
    getline(cin, sv.hoTen);

    // Nhập lớp (theo định dạng của PTIT, không cần kiểm tra chi tiết)
    getline(cin, sv.lop);

    // Nhập ngày sinh (dd/mm/yyyy)
    getline(cin, sv.ngaySinh);

    // Nhập điểm GPA (float, trong khoảng 0-4, làm tròn 2 số sau dấu phẩy)
    cin >> sv.gpa;
    cin.ignore(); // Xóa bộ đệm sau khi nhập số

    // Tạo mã sinh viên
    sv.maSV = taoMaSV(count);
}

// Hàm in thông tin sinh viên trên 1 dòng, không khoảng trắng thừa
void in(SinhVien sv) {
    cout << sv.maSV << " " << sv.hoTen << " " << sv.lop << " " << sv.ngaySinh << " " 
         << fixed << setprecision(2) << sv.gpa << endl;
}

int main() {
    int count = 0; // Biến đếm để tạo mã SV
    SinhVien sv;
    
    // Nhập thông tin sinh viên
    nhap(sv, count);
    
    // In thông tin sinh viên
    in(sv);

    return 0;
}