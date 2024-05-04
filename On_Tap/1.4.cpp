#include<bits/stdc++.h>
using namespace std;

float fn(int n){
    if(n==1||n==2) return 1;
    return fn(n-1) + fn(n-2);
}

float sn(int n){
    if(n==1) return 1/2;
    if(n==2) return 1;
    return sn(n-1) + n*1.0/(1+fn(n));
}
int main(){
    int n=4;
    cout<<sn(n);
}