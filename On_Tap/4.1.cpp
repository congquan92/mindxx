#include<bits/stdc++.h>
using namespace std;
FILE *f = fopen("num.inp","r");
FILE *f1 = fopen("num.out","w");

//a
int check(int n){
    if( n < 2) return -1;
    for(int i =2;i<=sqrt(n);i++){
        if( n % i == 0) return -1;
    }
    return 1;
}

void a1(int *&a,int &n){
    fscanf(f,"%d",&n);
    a = new int[n];
    int d=0;
    for(int i =0;i<n;i++){
        fscanf(f,"%d",&*(a+i));
        if(check(*(a+i))==1) d++;
    }
    fprintf(f1,"%d\n",d);
}
//b
void sx(int *a,int n){
    for(int i=0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(*(a+i) > *(a+j) ) swap(*(a+i),*(a+j)); 
        }
    }
}
void b(int *&a,int &n){
    f = fopen("num.inp","r");
     fscanf(f,"%d",&n);
    a = new int[n];
    for(int i =0;i<n;i++){
        fscanf(f,"%d",&*(a+i));
    }
    sx(a,n);
     for(int i =0;i<n;i++){
        fprintf(f1,"%d ",*(a+i));
    }
}
int main(){
    int *a;
    int n;
    a1(a,n);
    b(a,n);
}