#include<bits/stdc++.h>
using namespace std;

//a
int a(int n){
    if(n==1) return 1;
    return n + a(n-1);
}

//b
int b(int n){
    if(n==1) return 1;
    return (n*n) + b(n-1);
}

//c
int c(int n){
    if(n==1) return 1;
    int s=1;
    for(int i =1;i<=n;i++){
        s*=i;
    }
    return s+c(n-1);
}

//d
int d(int n){
    if(n==1) return 2;
    int s=1;
    for(int i = 1;i<=n;i++){
        s*=(n+i);
    }
    return s +d(n-1);
}

int main(){
    int n=4;
    cout<<"N = 4"<<endl;
    cout<<"Cau a.   "<<a(n)<<endl;
    cout<<"Cau b.   "<<b(n)<<endl;
    cout<<"Cau c.   "<<c(n)<<endl;
}