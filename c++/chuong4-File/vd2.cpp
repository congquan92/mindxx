#include<bits/stdc++.h>
using namespace std;
int main(){
    FILE *f = fopen("VD!.txt","wt");
    int n,t=0;
    int a[100];
   cout<<"Nhap n= ";cin>>n;
   fprintf(f,"%d\n",n);
   for(int i =0;i<n;i++){
    cin>>a[i];
    fprintf(f,"%6d",a[i]);
   }
   for(int i =0;i<n;i++){
    t+=a[i];
   } fprintf(f,"%6d",t);
    fclose(f);
}