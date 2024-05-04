#include<bits/stdc++.h>
using namespace std;

void docFile(int &n, int *&a){
    FILE *f = fopen("test.txt","r");
    if (!f) {
        cout << "Khong mo duoc file!";
        return;
    }

    fscanf(f,"%d",&n);
    a = new int[n];
    for(int i = 0; i < n; i++){
        fscanf(f,"%d", &a[i]);
    }
    fclose(f);
}

bool checkSoChinhPhuong(int n){
    int s = sqrt(n);
    return (s * s == n);
}

void ghiFile(int n, int *a){
    FILE *f = fopen("CP.txt","w");
    if (!f) {
        cout << "Khong mo duoc file!";
        return;
    }

    int d = 0;
    for(int i = 0; i < n; i++){
        if (checkSoChinhPhuong(a[i])){
            fprintf(f, "%d ", a[i]);
            d++;
        }
    }
    fprintf(f, "\nTong so chinh phuong: %d", d);
    fclose(f);
}

int main(){
    int n;
    int *a;
    docFile(n, a);
    ghiFile(n, a);
    delete[] a;
    return 0;
}
