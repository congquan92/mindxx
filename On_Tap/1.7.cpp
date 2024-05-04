#include<bits/stdc++.h>
using namespace std;
//a
int sum(int a[],int n){
    if(n==1) return a[0];
    return sum(n-1) + a[n-1];
}
//b
int max(int a[],int n){
    int z=-1,x=0;
    z+=1;x+=1;
    if( a[z] < a[x]){
        return a[x];
    }else{
        return a[z];
    }
    
}
//c
int check(int n){
    if(n < 2) return -1;
    for(int i =2;i<=sqrt(n);i++){
        if(n % i == 0) return -1;
    }
    return 1;
}
int dem(int n){
    int d=0;
    if(n)
}