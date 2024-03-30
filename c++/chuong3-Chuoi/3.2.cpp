#include <iostream>
#include <cstring>
using namespace std;

int ktraviti(char* s, char* x) {
    char* p = strchr(s, *x); // Tìm ký tự đầu tiên của chuỗi x trong chuỗi s
    if (p == nullptr)
        return -1; // Nếu không tìm thấy, trả về -1
    else
        return p - s; // Trả về vị trí của ký tự đầu tiên của chuỗi x trong chuỗi s
}

int ktra(char* s, char* x) {
    int d = 0;
    char* p = s;
    while ((p = strchr(p, *x)) != nullptr) { // Tìm ký tự đầu tiên của chuỗi x trong chuỗi s
        d++;
        p++; // Cập nhật vị trí p để tìm tiếp
    }
    return d;
}

int main() {
    char* s = new char[1000];
    char* x = new char[1000];
    cout << "Nhap chuoi s :\n";
    cin.getline(s, 1000);
    cout << "Nhap chuoi x :\n";
    cin.getline(x, 1000);

    cout << "So lan chuoi x xuat hien trong s: " << ktra(s, x) << endl;
    cout<<"o vi tri :"<<ktraviti(s,x);

    delete[] s; // Giải phóng bộ nhớ
    delete[] x; // Giải phóng bộ nhớ

    return 0;
}
