#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
void sx(int a[],int l,int r){
    int x=a[(l+r)/2];
    int i=l;
    int j=r;
do{
    while(a[i]>x) i++;
    while(a[j]<x) j--;
    if(i<=j) swap(a[i++],a[j--]);
}while(i<j);
if(l<j) sx(a,l,j);
if(i<r) sx(a,i,r);
}
void xuat(int a[],int n){
    for(int i=0;i<=n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={1,4,2,5,76,3,45,2};
    sx(a,0,7);
    xuat(a,7);
}