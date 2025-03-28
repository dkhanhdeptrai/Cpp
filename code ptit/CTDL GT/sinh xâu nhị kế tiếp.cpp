#include <iostream>
#include <iomanip>
#define MAX 100
using namespace std;

int X[MAX], n, dem = 0; // Biến toàn cục: mảng X lưu xâu nhị phân, n là độ dài, dem đếm số xâu
bool OK = true;         // Biến đánh dấu khi sinh xong tất cả xâu

void Init() {           // Khởi tạo xâu nhị phân đầu tiên
    cout << "Nhap n = ";
    cin >> n;
    for (int i = 1; i <= n; i++) { // Tạo xâu với n số 0
        X[i] = 0; // Gán từng phần tử bằng 0
    }
}

void Result() {         // In xâu nhị phân hiện tại
    cout << "\nXau thu " << ++dem << ": "; // In ra số thứ tự xâu
    for (int i = 1; i <= n; i++) {
        cout << X[i] << setw(3); // In từng chữ số, cách nhau 3 ký tự
    }
}

void Next_Bits_String() { // Sinh xâu nhị phân kế tiếp
    int i = n;
    while (i > 0 && X[i]) { // Duyệt từ phải sang trái, tìm vị trí đầu tiên không phải 1
        X[i] = 0;           // Chuyển 1 thành 0
        i--;                // Lùi về vị trí trước
    }
    if (i > 0) {            // Nếu chưa duyệt hết (tức chưa phải xâu toàn 1)
        X[i] = 1;           // Chuyển 0 đầu tiên thành 1
    } else {                // Nếu duyệt hết (xâu toàn 1)
        OK = false;         // Đánh dấu kết thúc
    }
}

int main() {
    Init();              // Khởi tạo xâu đầu tiên
    while (OK) {         // Lặp khi chưa sinh hết các xâu
        Result();        // In xâu hiện tại
        Next_Bits_String(); // Sinh xâu tiếp theo
    }
    cout << endl;        // Xuống dòng cuối cùng cho đẹp
    return 0;
}