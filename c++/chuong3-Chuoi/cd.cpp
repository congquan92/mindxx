#include<bits/stdc++.h>
using namespace std;

// void xoa_KC_dau(char *&s){
//     while( *s ==' '){
//        s=s+1;
//     }
    
// }

// char* Tach_ten(char *s){
//     return strrchr(s,' ') + 1;
// }
// char* Tach_ho_lot(char *s){
//     return strrev(strchr(strrev(s),' ')+1);
// }

// //c1
// void xoa_KC_cuoi(char* &s){
//     strchr(strrev(s),' ');
//     while(*s == ' '){
//         s++;
//     }
//     strrev(s);
// }
// //c2
// char* xoa_KC_cuoi2(char *s){
//     char* temp = strrev(s);
//     xoa_KC_dau(temp);
//     temp = strrev(temp);
//     return temp;
// }
// void xoa_cac_KC_giua(char* &s){
//     char *temp =strstr(s," ");
//     while(temp != nullptr){
//         strcpy(temp,temp + 1);
//         temp = strstr(temp+1," ");
//     }
// }
// int *vitri(char *s,char *x){
//     char* temp = strstr(s,x);
//     int vitri = -1;
//     if(temp != nullptr){
//         vitri = temp - s;//lay vi tri sau - dau.
//     }
//     return vitri;
// }

void xoa_p_l_ky_tu(char *s,int l,int p){
    char *temp = new char [strlen(s)+1];
    strcpy(temp,s+p+l);
    s[p] = '\0';
    strcat(s,temp);
}
void sort(char *s ){
    for(int i = 0;i<strlen(s)-1;i++){
        for(int j = i+1;j<strlen(s);j++){
            if(*(s+i) > *(s+j)){
                swap(*(s+i),*(s+j));
            }
        }
    }
}

void sx( char * s){
    int n = strlen(s);
    char *token = strtok(s," ");
 
    while(token != nullptr){
        sort(token);
        token= strtok(nullptr," ");
    }
   for(int i=0;i<n;i++){
    if(s[i] == '\0'){
        s[i]=' ';
    }
    cout<<(s[i]);
   }
   
}

int main(){
    char *s =new char[100];
    gets(s);
    sx(s);
    //puts(Tach_
    // ten(s));
    // puts(Tach_ho_lot(s));
   // puts(xoa_KC_cuoi2(s));
    //xoa_KC_cuoi(s);
    // xoa_cac_KC_giua(s);
   // puts(s);
}