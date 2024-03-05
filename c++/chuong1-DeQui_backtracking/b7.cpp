#include <bits/stdc++.h>
using namespace std;
//mang
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
//tinh tong
int sum(int a[],int n){
    if(n==1)return a[0];
    return a[n-1]+sum(a,n-1);
}
//ktra songto
bool check(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n % i==0) return false;
    }
    return true;
}
void demngto(int a[],int n,int i,int dem){
   
}
//tim so max
int max(int a[],int n, int m){
    if()
}
// timf vi tri cua gtri x;
int vitri(int a[],int n,int x){
    for(int i=0;i<=n;i++){
        if(a[i]==x) return i;
        else return -1;
    }
}

int main(){
    int a[1000];int n;cin>>n;
    nhap(a,n);ngto(a,n);
    //cout<<sum(n);cout<<endl;
    
}