#include<bits/stdc++.h>
using namespace std;
void docMang(int *&a,int &m,int &n){
    FILE *f = fopen("table.inp.txt","r");
    fscanf(f,"%d%d",&m,&n);
    a=new int [m*n];
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            fscanf(f,"%d",&*(a+n*i+j));
        }
    }
}

int checkPrime(int n){
    if(n < 2) return 0;
    for(int i = 2;i<=sqrt(n);i++){
        if( n % i == 0) return 0;
    }
    return 1;
}

int dem_nguyeto(int *a,int m,int n){
    int d=0;
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            if(checkPrime(*(a+n*i+j)) == 1) d++;
        }
    }
    return d;
}

int tongmax_dong(int *a,int m,int n) {
    int maxSum = 0;
    for (int i = 0; i < m; i++){
        int dongSum = 0;
        for (int j = 0; j < n; j++){
            dongSum += *(a+n*i+j);
        }
        if( maxSum < dongSum ) maxSum = dongSum;
    }
    return maxSum;
}
int tongmin_cot(int *a,int m,int n){
    int min_c =INT_MAX;
    for(int j =0;j<n;j++){
        int tongcot =0;
        for(int i =0 ;i<m;i++){
            tongcot += *(a+n*i+j);
    }   
        if( min_c > tongcot) min_c =tongcot;

    }
    return min_c;
}
void Max_Mang(int *a,int m,int n,int &d,int &max){
     d=0;
     max=0;
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            if( max < *(a+n*i+j)){
                max =*(a+n*i+j);
                d =1;
            }else{
                 if( max == *(a+n*i+j)) d++;
            }
        }
    }
}

int main(){
   int *a;
   int n,m,max,d;
   docMang(a,m,n);
   FILE *f = fopen("table.out.txt","w");
   fprintf(f,"Dem cac so ngto: %d",dem_nguyeto(a,m,n));
   fprintf(f,"\n ");
   fprintf(f,"Tong lon nhat cua dong : %d",tongmax_dong(a,m,n));
   fprintf(f,"\n ");
   fprintf(f,"Tong be nhat cua cot : %d",tongmin_cot(a,m,n));
   fprintf(f,"\n ");
    Max_Mang(a,m,n,d,max);
    fprintf(f,"So lon nhat cua matrix : %d",max);
    fprintf(f,"\tSo lan Xuat hien cua no :%d",d);

}