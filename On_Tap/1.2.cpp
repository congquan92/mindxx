#include<bits/stdc++.h>
using namespace std;

//a
int a(int n){
    if(n==1||n==2) return 1;
    return a(n-1) + (n-1)*a(n-2);
}
//b
int b(int a[],int n){
    a[1]=a[2]=1;
    for(int i=3;i<=n;i++){
        a[i]=a[i-1] +(i-1)*a[i-2];
    }
    return a[n];
}


int main(){
    int n=7;
    int f[1000];
    cout<<a(n)<<endl;
    cout<<b(f,n);
}