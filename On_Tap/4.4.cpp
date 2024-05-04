#include<bits/stdc++.h>
using namespace std;

FILE *f =fopen("table.inp","r");
FILE *f1=fopen("table2.out","w");
//a
void a1(int *&a,int &m,int &n){
   f = fopen("table.inp","r");
    fscanf(f,"%d%d",&m,&n);
    a = new int [m*n];
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            fscanf(f,"%d",&*(a+n*i+j));
        }
    }
    int mx =0;int d=0;
     for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            if(*(a+n*i+j) > mx) {mx=*(a+n*i+j); d++;}
        }
     }
     fprintf(f1,"%d  %d\n",mx,d);
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
//tinh cot 
     for(int j =0;j<n;j++){
            int t=0;
        for(int i =0;i<m;i++){
            t+=*(a+n*i+j);
        }
         fprintf(f1,"%d  ",t);
     }
//tinh hang
    fprintf(f1,"\n");
 for(int i =0;i<m;i++){
            int t=0;
        for(int j =0;j<n;j++){
            t+=*(a+n*i+j);
        }
         fprintf(f1,"%d  ",t);
     }
}
int main(){
    int *a;int m,n;
    a1(a,m,n);
    b(a,m,n);
}
