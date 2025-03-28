#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct SinhVien {
    string hoTen;
    string ngaySinh;
    float diemMon1, diemMon2, diemMon3;
};

int main() {
    SinhVien sv;
    float tongDiem;

    getline(cin, sv.hoTen); // Đọc cả dòng
    getline(cin, sv.ngaySinh);
    cin >> sv.diemMon1;
    cin >> sv.diemMon2;
    cin >> sv.diemMon3;

    tongDiem = sv.diemMon1 + sv.diemMon2 + sv.diemMon3;

    cout << sv.hoTen << " " << sv.ngaySinh << " " << fixed << setprecision(1) << tongDiem << endl;

    return 0;
}