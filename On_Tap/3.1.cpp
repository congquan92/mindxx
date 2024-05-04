#include<bits/stdc++.h>
using namespace std;
//a
void a(char *s){
    int d=0;int dd=0;
    for(int i=0;i<strlen(s);i++){
        if(islower(*(s+i))) d++;
        else{
            if(isupper(*(s+i))) dd++;
        }
    }
    cout<<"Thuong = "<<d<<endl;
    cout<<"Hoa = "<<dd<<endl;
}
//b
void b(char *s){
    for(int i =0;i<strlen(s);i++){
        cout<<int(*(s+i))<<" ";
    }
}
//c
void c(char*s){
    s = strlwr(s);
    *(s+0) = *(s+0) -32;
    char *t = strchr(s,' ');
    while( t!=nullptr){
        *(t + 1) -=32;
        t = strchr(t+1,' ');
    }  
}
//d
void d(char *s){
    int d = 0;
    char *t = strchr(s,' ');
    while(t!=nullptr){
        d++;
        t = strchr(t+1,' ');
    }
    cout<<"\nSo luong tu trong chuoi : "<<d;

}
//e
void e(char *s){
    char *f = s;
    char *t=strchr(s,' ');
    while(t !=nullptr){
        cout<<" SL ="<<t-f;
        f = t+1;
        t = strchr(t+1,' ');
    }
    cout<<" SL ="<<strlen(f);
}
//f
void f(char *s){
    char *f=s;
    char *t=strchr(s,' ');
    char *c=strrchr(s,' ');
    cout<<"SL tu ben trai : "<<t-f;
    cout<<"SL tu ben phai :"<<strlen(c)-1;
}

int main(){
    char *s =new char[100];
    gets(s);
    a(s);
    cout<<" Ma ASCII ";b(s);cout<<endl;
    //c(s);
    e(s);cout<<endl;
    f(s);
}