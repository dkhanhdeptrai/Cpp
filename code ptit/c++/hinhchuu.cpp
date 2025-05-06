#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Nhập chiều cao của chữ U (5 ≤ N ≤ 100)

    // Kiểm tra điều kiện đầu vào
    if (n < 5 || n > 100) {
        cout << "N phai nam trong khoang [5, 100]" << endl;
        return 0;
    }

    // Vẽ chữ U
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((j == 0 || j == n - 1) && i != n - 1) { // Hai cạnh dọc
                cout << "*";
            } else if (i == n - 1 && (j == 0 || j == n - 1 || (j > 0 && j < n - 1))) { // Đáy chữ U vuông góc
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}