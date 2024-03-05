#include<iostream>
using namespace std;
void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void hoanvi(int &a,int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
int ps(int a[],int l,int r){
	int pivot=a[r];
	int i=l-1;
	for(int j=l;j<r;j++){
		if(a[j]<=pivot){
			++i;
			hoanvi(a[i],a[j]);
		}
	}
	++i;
	hoanvi(a[i],a[r]);
	return i;
}
void quicksort(int a[],int l,int r){
	if(l<r){
	int p=ps(a,l,r);
	quicksort(a,l,p-1);
	quicksort(a,p+1,r);
    }
}
void xuatmang(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[100],n;
	cin>>n;
	nhapmang(a,n);
	quicksort(a,0,n-1);
	xuatmang(a,n);
	return 0;
}