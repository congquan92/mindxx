#include <bits/stdc++.h>
using namespace std;

struct hoso {
    string hoten, MSSV;
    int moncb;
    int c1;
    int c2;
    int tong, tong1;
};

void nhap(hoso* &hs, int& n) {
    cout << "Nhap so luong ho so: ";
    cin >> n;
    // tao mang ma con tro tro den vị tri dau tien cua mang
    hs = new hoso[n];
    for (int i = 0; i < n; i++) {
        cout << "MSSV: ";cin >> (hs + i)->MSSV;
        cout << "Ho va Ten: ";cin.ignore();getline(cin, (hs + i)->hoten);
        cout << "Mon co ban: ";cin >> (hs + i)->moncb;
        cout << "Mon chuyen nganh 1: ";cin >> (hs + i)->c1;
        cout << "Mon chuyen nganh 2: ";cin >> (hs + i)->c2;
        (hs + i)->tong = (hs + i)->moncb + (hs + i)->c1 + (hs + i)->c2;
        (hs + i)->tong1 = (hs + i)->c1 + (hs + i)->c2;
    }
}

void xuat(hoso* hs, int n) {
    cout << "Danh sach ho so:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nMSSV: " << (hs + i)->MSSV;
        cout << "\nHo va Ten: " << (hs + i)->hoten;
        cout << "\nDiem mon co ban: " << (hs + i)->moncb;
        cout << "\nDiem mon chuyen nganh 1: " << (hs + i)->c1;
        cout << "\nDiem mon chuyen nganh 2: " << (hs + i)->c2;
        cout << "\nDiem tong 3 mon: " << (hs + i)->moncb + (hs + i)->c1 + (hs + i)->c2<<endl;
        cout << "\nDiem tong 2 mon chuyen nganh: " << (hs + i)->tong1 << endl;
    }
}

void thap(hoso* hs, int n) {
    int x = 0;
    cout << "DS hoc sinh co mon duoi 5 la:" << endl;
    for (int i = 0; i < n; i++) {
        if ((hs + i)->c1 <= 4 || (hs + i)->c2 <= 4 || (hs + i)->moncb <= 4) {
            x++;
            cout<<"---------------------------\n";
            cout << "Ho ten: " << (hs + i)->hoten;
            cout << "\nDiem mon co ban: " << (hs + i)->moncb;
            cout << "\nDiem mon chuyen nganh 1: " << (hs + i)->c1;
            cout << "\nDiem mon chuyen nganh 2: " << (hs + i)->c2 << endl;
            cout<<"---------------------------\n";
        }
    }
    if (x == 0)
        cout << "Khong co hoc sinh nao co mon duoi 5\n";
}

void tong(hoso* hs, int n) {
    cout<<" Sinh vien co diem 3 mon cao nhat la :\n";
    int m = (hs + 0)->tong;
for (int i = 1; i < n; i++) {
    if (m < (hs + i)->tong) {
         m = (hs + i)->tong;
}
}
for(int i=0;i<n;i++){
        if((hs+i)->tong == m){
             cout<<"---------------------------\n";
            cout << "Ho ten: " << (hs + i)->hoten;
            cout << "\nDiem mon co ban: " << (hs + i)->moncb;
            cout << "\nDiem mon chuyen nganh 1: " << (hs + i)->c1;
            cout << "\nDiem mon chuyen nganh 2: " << (hs + i)->c2 << endl;
            cout<<"---------------------------\n";
        }
    }
}    
void swap(hoso &hs1, hoso &hs2) {
    hoso hstemp = hs1;
    hs1 = hs2;
    hs2 = hstemp;
}

void sapxep(hoso* hs, int n) {
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if ((hs + i)->tong1 < (hs + j)->tong1)
                swap(*(hs + i), *(hs + j));
}

int main() {
hoso* hs = nullptr;
int n = 0;
while (1) {
    cout << "_________________________________\n";
    cout << "_____________MENU________________\n";
    cout << "1. Nhap danh sach cac sinh vien\n";
    cout << "2. Hien thi danh sach cac sinh vien diem tong 3 mon.\n";
    cout << "3. Sap xep ds sinh vien theo tong 2 mon chuyen nganh tang dan.\n";
    cout << "4. Danh sach sinh vien co 1 mon duoi 5.\n";
    cout << "5. Sinh vien co diem lon nhat.\n.";
    cout << "6. Thoat\n";
    cout << "_________________________________\n";
    cout << "Lua chon tu 1-5: ";
int l;cin >> l;
switch (l){
        case 1:
            nhap(hs, n);
            break;
        case 2:
            xuat(hs, n);
            break;
        case 3:
            sapxep(hs, n);
            xuat(hs, n);
            break;
        case 4:
            thap(hs, n);
            break;
        case 5: 
            tong(hs,n); 
            break;   
        case 6:
                // Clean up dynamic memory before exiting, xoa bo nho
            delete[] hs;
            return 0;
        default:
            cout << "Lua chon khong hop le. Vui long nhap lai.\n";
        }
    }
}
