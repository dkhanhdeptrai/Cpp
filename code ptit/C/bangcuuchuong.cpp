#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Nhập số nguyên dương N

    // Kiểm tra điều kiện N hợp lệ (1 ≤ N ≤ 9)
    if (N < 1 || N > 9) {
        return 0;
    }

    // In bảng nhân của N từ 1 đến 10
    for (int i = 1; i <= 10; i++) {
        printf("%d", N * i);
        if (i < 10) {
            printf(" "); // In khoảng trắng giữa các số
        }
    }

    return 0;
}
