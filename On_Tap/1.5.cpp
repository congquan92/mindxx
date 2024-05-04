#include<bits/stdc++.h>
using namespace std;
int xn(int n){
    if(n==0||n==1) return 1;
    int t=0;
    for(int i =1;i<n;i++){
        t+=xn(i);
    }
    return n*t;
}
int main(){
    cout<<xn(7);
}