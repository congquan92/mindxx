#include <bits/stdc++.h>
using namespace std;

int isprime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int kt(int *a, int n) {
    int d = 0;
    for (int i = 0; i < n; i++) { // Sửa vòng lặp
        if (isprime(a[i])) {
            d++;
        }
    }
    return d;
}

void sx(int *a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
}

void DocFIle(char *filename, int *&a, int &n) {
    FILE *filein = fopen(filename, "r");
    if (filein != nullptr) {
        fscanf(filein, "%d", &n);
        a = new int[n];
        for (int i = 0; i < n; i++) {
            fscanf(filein, "%d", &a[i]);
        }
        fclose(filein);
    } else {
        cout << "Loi Doc ";
    }
}

void GhiFile(char *filename, int deNT, int *arr, int n) {
    FILE *fileout = fopen(filename, "w");
    if (fileout != nullptr) {
        fprintf(fileout, "%d\n", deNT);
        for (int i = 0; i < n; i++) {
            fprintf(fileout, "%d ", arr[i]); // Thêm dấu cách sau mỗi số nguyên
        }
        fprintf(fileout, "\n");
        fclose(fileout);
    } else {
        cout << "Loi Ghi";
    }
}

int main() {
    int *a;
    int n;
    DocFIle("NUM.INP.txt", a, n);
    int d = kt(a, n);
    sx(a, n);
    GhiFile("NUM.OUT.txt", d, a, n);
    
    delete[] a; // Giải phóng bộ nhớ đã cấp phát

    return 0;
}
