#include<bits/stdc++.h>

using namespace std;
//a
void demHoathuong(char* s){
    int a=0,t=0;
    for(size_t i = 0; i<strlen(s);i++){//so ky tu trong chuoi
        if(s[i] >= 'A' && s[i] <= 'Z'){ 
            a++;
}     else if( s[i] >= 'a' && s[i] <= 'z'){
    t++;
}
 }
    cout<<" Hoa = "<<a<<endl;
    cout<<"Thuong ="<<t<<endl;
}

//b
void Assci(char *s){
    for(size_t i = 0; i<strlen(s);i++){//so ky tu trong chuoi
        cout<<(int)s[i]<<" ";
}
}
//c
void ChuyenHoaKyTuDauT(char *s){
    s=strlwr(s);//chuyen ve chu thuong het or tolower chu thuong,toupper chu hoa;
    s[0] = s[0] - 32;
    char* temp = strchr (s,' ');//tim ki tu " ";
    while(temp != nullptr){
        *(temp + 1) = *(temp + 1) -32;
        temp = strchr( temp +1,' ');
    }
}
//d
void demsoluongtu(char *s){
    int d=1;
    char *temp =strchr(s,' ');
    while(temp !=nullptr){
         d++;
        temp = strchr(temp+1,' ');
    
    }
    cout<<"So luong tu la : "<<d;
}
//e
void demKytumoitu(char *s){
   char *first = s;
   char *temp =strchr(s,' ');
   while(  temp != nullptr){
    cout<<" do dai : "<<temp-first<<endl;
    first = temp +1;
    temp = strchr(temp+1,' ');
   }
   cout<<"do dai : " <<strlen(first)<<endl;;
}

//sx cac ky tu theo cgieu tang dan ,cac khoang trang dc giu nguyen 

void SXAssci(char *s){
     for(size_t i = 0; i<strlen(s)-1;i++){//so ky tu trong chuoi
        for(size_t j = i+1; j<strlen(s);j++){ 
            if(s[i] > s[j] && s[i] != ' ' && s[j] !=' '){
                    char x = s[i];
                    s[i] = s[j];
                    s[j] = x;
                }
            }  
    }
    }

//tan suat cac tu suat hien
void ts(char *s){
    int d[255];
    for(size_t i =0;i<strlen(s);i++){
        d[s[i]]=0;
    }
    for(size_t i =0;i<strlen(s);i++){
        d[s[i]]++;
    }
    for(size_t i =0;i<strlen(s);i++){
      if( d[s[i]] !=0) {
        cout<<s[i]<<" Xuat hien "<<d[s[i]]<<endl;
         d[s[i]]=0;
      } 
     
    }
    
}

void max_word(char *s){
    char *t = strtok(s," ");
    int m = 0;
    while( t != nullptr){
        if(strlen(t) > m){
            m = strlen(t);
        }
        t = strtok(nullptr," ");
    }
    cout<<" tu dai nhat la :"<<m<<endl;
}




int main(){
    char *s = new char[100];
    cin.getline(s,100);//or gets(s);
    ts(s);
// demHoathuong(s);
//    Assci(s);
    //ChuyenHoaKyTuDauT(s);
   // puts(s);//in ra or cout<<s;
    //demKytumoitu(s);
   // demsoluongtu(s);
}