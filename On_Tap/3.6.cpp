#include<bits/stdc++.h>

using namespace std;

struct NV{
    char name[256];
    char ms[256];
    char date[256];
    long long cb;
    long long thuong;
    long long thuclanh;
};
//a
void a(NV nv[], int &n){
    cout<<"Nhap so luong : ";cin>>n;
 
    for(int i =1;i<=n;i++){
        cout<<"Nhan vien thu "<<i<<endl;
        cout<<"MA : ";cin.ignore();cin.getline(nv[i].ms,256);//cin doc den khoang trang thoi
        cout<<"Name : ";cin.ignore();cin.getline(nv[i].name,256);//getlin doc den khi co bam enter va no luu vao mang cin.getline(cin,str); 
        cout<<"date : ";cin.ignore();cin.getline(nv[i].date,256);
        cout<<"Luong co ban :";cin>>nv[i].cb;
        cout<<"Thuong them : ";cin>>nv[i].thuong;
        nv[i].thuclanh = nv[i].thuong +nv[i].cb;
      
    }
}
void inds(NV nv[],int n){
    cout<<"\tDANH SACH\n";
    for(int i=1;i<=n;i++){
        cout<<"MS :"<<nv[i].ms<<endl;
        cout<<"Name :"<<nv[i].name<<endl;
        cout<<"Date :"<<nv[i].date<<endl;
        cout<<"Luong CB :"<<nv[i].cb<<endl;
        cout<<"Thuong them :"<<nv[i].thuong<<endl;
        cout<<"Thuoc lanh :"<<nv[i].thuclanh<<endl;
    } 
}
//b
void inds_theoThucLanh(NV nv[],int n){
    for(int i=1;i<n;i++){
        for(int j=i+1; j<=n;j++){
            if(nv[i].thuclanh > nv[j].thuclanh){
                swap(nv[i],nv[j]);
            }
        }
    }
}
//c
void inds_theoMA(NV nv[],int n){
     for(int i=1;i<n;i++){
        for(int j=i+1; j<=n;j++){
            if(strcmp(nv[i].ms,nv[j].ms) > 0){
                swap(nv[i],nv[j]);
            }
        }
    }
}
int main(){
    int n;
    NV nv[1000];
    a(nv,n);
    inds_theoMA(nv,n);
    inds(nv,n);

}