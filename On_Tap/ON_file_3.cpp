#include<bits/stdc++.h>
using namespace std;

FILE *f = fopen("abz.inp","r");
FILE *f1 = fopen("abz.out","w");

void cau_a(int &n, int *&a ){
    int s=0;
    fscanf(f,"%d",&n);
    a = new int[n];
    for(int i =0;i<n;i++){
        fscanf(f,"%d",&*(a+i));
        s+=*(a+i);
    }
    fprintf(f1,"cau a : %d\n",s);
}
void cau_b(int &n,int *&a){
    f = fopen("abz.inp","r");
    int m =0;
    fscanf(f,"%d",&n);
    a = new int[n];
    for(int i=0;i<n;i++){
        fscanf(f,"%d",&*(a+i));
        if(m < *(a+i)) {m = *(a+i);} 
    }
    fprintf(f1,"cau b :%d\n",m);
}
int check_ngt(int n){
    if( n < 2) return -1;
    for(int i=2;i<=sqrt(n);i++){
        if( n % i==0) return -1;
    }
    return 1;
}

void cau_c(int &n,int *&a){
    f = fopen("abz.inp","r");
    int d=0;
    fscanf(f,"%d",&n);
    a = new int[n];
    for(int i=0;i<n;i++){
        fscanf(f,"%d",&*(a+i));
        if(check_ngt(*(a+i))==1) d++;
    }
    fprintf(f1,"cau c : %d\n",d);

}
int check_CP(int n){
    int sqr = sqrt(n);
    if( sqr*sqr==n){return 1};
    return -1;
}
void cau_d(int &n,int *&a){
    f = fopen("abz.inp","r");
    int d=0;
    fscanf(f,"%d",&n);
    a = new int[n];
    for(int i=0;i<n;i++){
        fscanf(f,"%d",&*(a+i));
        if(check_ngt(*(a+i))==1 && check_CP(*(a+i))==1) d++;
    }
    fprintf(f1,"cau c : %d\n",d);

}

int main(){
    int *a;
    int n;
    cau_a(n,a);
    cau_b(n,a);
    cau_d(n,a);
}