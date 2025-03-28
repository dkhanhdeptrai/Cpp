#include <iostream>
using namespace std;

// Hàm tìm kiếm tuần tự
int sequential_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Trả về vị trí đầu tiên tìm thấy
        }
    }
    return -1; // Không tìm thấy
}

// Hàm tìm kiếm nhị phân trả về vị trí đầu tiên
int binary_search_first(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Tránh tràn số
        if (arr[mid] == target) {
            result = mid; // Lưu vị trí, tiếp tục tìm bên trái
            right = mid - 1; // Tìm vị trí đầu tiên
        } else if (arr[mid] < target) {
            left = mid + 1; // Tìm bên phải
        } else {
            right = mid - 1; // Tìm bên trái
        }
    }
    return result; // Trả về vị trí đầu tiên hoặc -1 nếu không tìm thấy
}

// Hàm main để kiểm tra
int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5, 6}; // Mảng đã sắp xếp cho Binary Search
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2; // Phần tử cần tìm

    // Tìm kiếm tuần tự
    int seq_result = sequential_search(arr, size, target);
    if (seq_result != -1) {
        cout << "Sequential Search: Vi tri dau tien cua " << target << " la " << seq_result << endl;
    } else {
        cout << "Sequential Search: Khong tim thay " << target << endl;
    }

    // Tìm kiếm nhị phân
    int bin_result = binary_search_first(arr, size, target);
    if (bin_result != -1) {
        cout << "Binary Search: Vi tri dau tien cua " << target << " la " << bin_result << endl;
    } else {
        cout << "Binary Search: Khong tim thay " << target << endl;
    }

    return 0;
}