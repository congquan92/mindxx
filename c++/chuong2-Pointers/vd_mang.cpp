#include<bits/stdc++.h>
using namespace std;
void nhap(int *a,int &n){
    cout<<" nhap n :";cin>>n;
    a=new int [n];
    for(int i=0;i<n;i++){
        cin<<*(a+i);
    }
}
void xuat(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
    }
}
int max(int *a,int n){
    int m = *a;
    for(int i=0;i<n;i++){
        if(*(a+i)>m) m=*(a+i);
    }
    return m;
}
void swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
void sx(int *a,int n){
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(*(a+i)>*(a+j)) swap(a+i,a+j);
    }
   }
}
int main(){
    int *a,n;
    nhap(a,n);
    cout<<"so lon nhat: "<<max(a,n)<<endl;
    sx(a,n);
    xuat(a,n);

}