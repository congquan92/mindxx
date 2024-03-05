#include <bits/stdc++.h>
using namespace std;
//ko de quy
int xn(int n){
    if(n==1) return 1;
    int s=0;
    for(int i=1;i<n;i++){
        s+=xn(i);
    }
    return s*n;
}
//de quy( dag sai sua di)
// int t(int n){
//     if(n==1)return 1;
//     return n+t(n-1);
// }
// int xn1(int n){
//     return n*(t(n)-1);
// }
// int main(){
//     int n;cin>>n;
//     cout<<xn(n);cout<<endl;
//     cout<<xn1(n);cout<<endl;
//     cout<<t(n);
// }