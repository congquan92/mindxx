#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int check(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, d = 0,x;
    int *a;
    FILE *f = fopen("num_bs.txt","rb");
    if (!f) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    n=getw(f);
    x=getw(f);//ham getw doc du lieu nhap them thi no tu nhay 
    cout<<n<<endl;
    a = new int[n];
    for(int i =0;i<n;i++){
        *(a+i) = getw(f);
        if(check(*(a+i))==1) d++;
    }
    cout<<d;
}

