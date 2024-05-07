#include<bits/stdc++.h>
using namespace std;

FILE *f = fopen("abc.txt","r");

void cau_a(){
    int d =0;
    while(!feof(f)){
        char s[512];
        fgets(s,512,f);
        d++;
    }
    cout<<"so luong chuoi : "<<d;
}

int demchuoi(char *s){
    int d =1;
    for(int i =0;i<strlen(s);i++){
        if(s[i] ==' ') d++;
    }
    return d;
}

void cau_b(){
    f=fopen("abc.txt","r");
    int m =0;
    char x[256];
    while(!feof(f)){
        char s[512];
        fgets(s,512,f);
        if(m < strlen(s)){
            m = strlen(s);
            strcpy(x,s);
        }
    }
    cout<<"chuoi dai nhat : "<<x;
}
void cau_c(){
    f = fopen("abc.txt","r");
    char x[256];
    int d =0;
    while(!feof(f)){
        char s[512];
        fgets(s,512,f);
        d +=demchuoi(s);
    }
    cout<<"So tu trong chuoi : "<<d;
}

void cau_d(){
    f = fopen("abc.txt","r");
    char x[256];
     int m = 0;
    while(!feof(f)){
        char s[512];
        fgets(s,512,f);
        char *t = strtok(s," ");
    while( t != nullptr){
        if(strlen(t) > m){
            m = strlen(t);
            strcpy(x,t);
        }
        t = strtok(nullptr," ");
    }
   
}
 cout<<" tu dai nhat la :"<<x<<endl;

}
int main(){
    cau_a();
    cout<<endl;
    cau_b();
    cout<<endl;
    cau_c();
    cout<<endl;
    cau_d();
}