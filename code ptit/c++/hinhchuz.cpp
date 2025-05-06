#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Nhập chiều cao của chữ Z (5 ≤ N ≤ 100)

    // Kiểm tra điều kiện đầu vào
    if (n < 5 || n > 100) {
        cout << "N phai nam trong khoang [5, 100]" << endl;
        return 0;
    }

    // Vẽ chữ Z
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == n - i - 1) { // Dòng đầu, dòng cuối, và đường chéo
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}