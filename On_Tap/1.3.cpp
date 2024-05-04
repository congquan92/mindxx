#include<bits/stdc++.h>
using namespace std;
float xn(int n);
float yn(int n);
int main(){
    int n=3;
    cout<<xn(n)<<" "<<yn(n);
}
float xn(int n){
    if(n==0) return 1;
    return xn(n-1)*1.0/3 +yn(n-1)*1.0/2 +27;
}
float yn(int n){
    if(n==0) return 2;
    return xn(n-1)*1.0/5 +yn(n-1)*1.0/7 +11;
}