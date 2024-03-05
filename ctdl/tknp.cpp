#include<bits/stdc++.h>
using namespace std;
int tk(int a[],int l,int r,int x){
    if(l > r) return -1;
    int mid=(l+r)/2;
    if(x==a[mid]) return mid;
    if(x<a[mid]) return tk(a,l,mid-1,x);
    return tk(a,mid-1,r,x);
}
int main(){
    int a[]={9,8,7,6,5,4,3,2,1};
   cout<<tk(a,0,8,7);
}
