#include<bits/stdc++.h>
using namespace std;

int xn(int n){
    if(n==0||n==1) return 1;
    int s=0;
    for(int i=1;i<=n;i++){
        s += i*xn(n-i);
    }
    return  s;
}

int main(){
    int n=3;
    cout<<xn(n);
}