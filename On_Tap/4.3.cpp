#include <bits/stdc++.h>
using namespace std;
FILE *f = fopen("table.inp","r");
FILE *f1 = fopen("table.out","w");

//nao for trc la thanh dong
//m dong,n cot
//a
int check(int n){
    if( n < 2) return -1;
    for(int i =2;i<=sqrt(n);i++){
        if( n % i == 0) return -1;
    }
    return 1;
}
void a1(int *&a,int &m,int &n){
   fscanf(f,"%d%d",&m,&n);
    a = new int [m*n];
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            fscanf(f,"%d",&*(a+n*i+j));
        }
    }
   int d=0;
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
          if(check(*(a+n*i+j))==1) d++;
        }
    }
    fprintf(f1,"%d\n",d);
}
//b
void b(int *&a,int &m,int &n){
    f = fopen("table.inp","r");
    fscanf(f,"%d%d",&m,&n);
    a = new int [m*n];
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            fscanf(f,"%d",&*(a+n*i+j));
        }
    }
    int mz=0;
    for(int i =0;i<m;i++){
        int t=0;
        for(int j =0;j<n;j++){
            t += *(a+n*i+j);
        }
         if(t > mz) mz=t;
    }
    fprintf(f1,"%d\n",mz);
}
//c
void c(int *&a,int &m,int &n){
   f = fopen("table.inp","r");
    fscanf(f,"%d%d",&m,&n);
    a = new int [m*n];
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            fscanf(f,"%d",&*(a+n*i+j));
        }
    }
    int minn = INT_MAX;
    for(int j =0;j<n;j++){
        int t=0;
        for(int i =0;i<m;i++){
            t += *(a+n*i+j);
        }
        if(minn > t ) minn = t;
    }
    fprintf(f1,"%d\n",minn);
}
int main(){
    int *a;
    int m,n;
    a1(a,m,n);
    b(a,m,n);
    c(a,m,n);
}