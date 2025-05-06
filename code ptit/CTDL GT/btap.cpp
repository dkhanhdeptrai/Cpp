#include <iostream>
using namespace std;

// Lớp Node đại diện cho một phần tử trong danh sách liên kết
class Node
{
public:
    int data;       // Dữ liệu lưu trữ trong nút
    Node *next;     // Con trỏ trỏ đến nút tiếp theo

    // Hàm khởi tạo để tạo một nút mới với giá trị
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

// Lớp SLinkedListWithTail đại diện cho danh sách liên kết đơn có con trỏ tail
class SLinkedListWithTail
{
private:
    Node *head;     // Con trỏ trỏ đến nút đầu tiên
    Node *tail;     // Con trỏ trỏ đến nút cuối cùng

public:
    // Hàm khởi tạo để tạo danh sách liên kết rỗng
    SLinkedListWithTail()
    {
        head = nullptr;
        tail = nullptr;
    }

    // Hàm thêm một nút mới vào cuối danh sách
    void addLast(int i)
    {
        Node *newNode = new Node(i); // Tạo một nút mới
        if (head == nullptr)         // Nếu danh sách rỗng
        {
            head = newNode;          // Gán head và tail là nút mới
            tail = newNode;
        }
        else
        {
            tail->next = newNode;    // Gắn nút mới vào cuối danh sách
            tail = newNode;          // Cập nhật tail
        }
    }

    // Hàm xóa nút cuối cùng khỏi danh sách
    void Remove()
    {
        if (head == nullptr)         // Nếu danh sách rỗng, không làm gì
        {
            return;
        }

        if (head == tail)            // Nếu danh sách chỉ có một nút
        {
            delete head;             // Xóa nút và đặt head, tail về nullptr
            head = nullptr;
            tail = nullptr;
            return;
        }

        Node *current = head;        // Duyệt danh sách để tìm nút kế cuối
        while (current->next != tail)
        {
            current = current->next;
        }

        delete tail;                 // Xóa nút cuối
        tail = current;              // Cập nhật tail là nút kế cuối
        tail->next = nullptr;
    }

    // Hàm duyệt và in danh sách
    void traverse()
    {
        Node *current = head;        // Bắt đầu từ nút đầu tiên
        while (current != nullptr)   // Duyệt đến cuối danh sách
        {
            cout << current->data << " "; // In dữ liệu của từng nút
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    SLinkedListWithTail list; // Tạo danh sách liên kết
    cout << "Nhap n: ";       // Nhập số lượng phần tử
    int n;
    cin >> n;

    // Thêm các phần tử từ 1 đến n vào danh sách
    for (int i = 1; i <= n; i++)
    {
        list.addLast(i);
    }

    list.traverse(); // In danh sách
    list.Remove();   // Xóa phần tử cuối
    list.traverse(); // In danh sách sau khi xóa
    list.addLast(n + 1); // Thêm phần tử mới vào cuối danh sách
    list.traverse(); // In danh sách sau khi thêm
    return 0;
}