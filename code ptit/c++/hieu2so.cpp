#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 10 || n > 99) {
        cout << "So nhap vao khong phai la so co hai chu so!" << endl;
        return 1;
    }

    int hangChuc = n / 10;
    int hangDonVi = n % 10;
    int tong = hangChuc - hangDonVi;

    cout << tong << endl;
    return 0;
}
