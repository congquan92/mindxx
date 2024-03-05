#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;

}
void quicksort(int a[],int l,int r ){
    int mid=a[(l+r)/2];
    int i=l;int j=r;
    do{
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;

        if(i<=j) swap(a[i++],a[j--]);
    }
    while(i<j);
        if(l<j) quicksort(a,l,j);
        if(i<r) quicksort(a,i,r);
}
int  min(int a[],int n){
    int m=a[0];
    for(int i=0;i<n;i++){
        if(m > a[i] ) 
            m =a[i];
    }
    return m;
}
int max(int a[],int n){
     int m=a[0];
    for(int i=0;i<n;i++){
        if(m < a[i] ) 
            m =a[i];
    }
    return m;
}
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void goi(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int find(int a[],int l,int r,int x){
    if(l>r) return -1;
    int mid=(l+r)/2;
    if(x==a[mid]) return mid;
    if(x<a[mid]) return find(a,l,mid-1,x);
    return find(a,mid-1,r,x);
}
int main(){
    int a[1000];
    int n,x;
    cout<<"Nhap n :";cin>>n;
    nhap(a,n);
    cout<<" nhap x :";cin>>x;
   // quicksort(a,0,n-1);
    cout<<find(a,0,n-1,x);
   //goi(a,n);
}