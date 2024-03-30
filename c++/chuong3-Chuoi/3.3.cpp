#include <iostream>
#include <cstring>
using namespace std;

void xoaviT(char *s, int l, int p) {
    int n = strlen(s);
    if (p >= 0 && p <= n) {
        // Di chuyển các ký tự sau vị trí p + l lên trước lần lượt
        memmove(s + p, s + p + l, n - p - l + 1);
    } else {
        cout << "Vi tri hoac do dai khong hop le" << endl;
    }
}

int main() {
    char s[] = "Hello, world!";
    int l = 5; // Số ký tự cần xóa
    int p = 5; // Vị trí bắt đầu xóa

    xoaviT(s, l, p);

    cout << "Chuoi sau khi xoa: " << s << endl;

    return 0;
}
