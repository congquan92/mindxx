
#include <bits/stdc++.h>
using namespace std;
int kt(int n){
    if(n<2) return -1;
    for(int i=2;i<=sqrt(n);i++){
        if(n % i==0) return -1;
    }
    return 1;
}
void xuat(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
    }
}
void xoa(int *a,int &n,int k){
    for(int i=k;i<n-1;i++){
        *(a+i)=*(a+i+1);
    }
    --n;
}
void chen(int *a,int &n,int k,int x){
    for(int i=n-1;i>=k;i--){
        *(a+i+1)=*(a+i);
    }
    *(a+k)=x;
    ++n;
}
void xoaNT(int *a,int& n){
    for(int i=0;i<n;i++){
        if(kt(*(a+i))==1){
            xoa(a,n,i);
            i--;
}
}}
int main()
{
    int *a,n,k;
    cout<<"Nhap N = ";cin>>n;
    cout<<"Nhap vitri can xoa=";cin>>k;
    a = new int (n);
    for(int i=0;i<n;i++){
        cin>>*(a+i);
    }
    xoa(a,n,k);
    xuat(a,n);
    
    return 0;
}