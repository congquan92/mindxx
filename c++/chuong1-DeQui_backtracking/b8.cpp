#include <bits/stdc++.h>
using namespace std;

int Ckn(int k,int n){
    if(n==k||k==0) return 1;
    return Ckn(k-1,n-1)+Ckn(k,n-1);
}
int main(){
    int k,n;cin>>k;cin>>n;
    cout<<Ckn(k,n);
}