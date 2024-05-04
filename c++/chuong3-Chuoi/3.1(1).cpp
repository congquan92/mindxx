#include <bits/stdc++.h>
using namespace std;

void chuyen_hoa(char *a){
     a = strlwr(a);
     a[0] =a[0] -32;
     char* t =strchr(a,' ');
     while(t !=nullptr){
        *(t + 1) = *(t + 1) -32;
        t = strchr(t+1,' ');
     }
}

void max_word(char * s){
   char *t = strtok(s," ");
   char res[100];
   int m = 0;
   while( t != nullptr){
      if(strlen(t) > m){
         m = strlen(t);
         strcpy(res,t);
      }
      t=strtok(nullptr," ");
   }
   cout<<res<<" "<<m;
}

char* first(char *s){
   return strrchr(s,' ') + 1;
}
char *ho(char *s){
   return strrev(strchr(strrev(s),' ')+1);
}
int main(){
   char *s=new char[100];
   gets(s);
   cout<<ho(s);
   // max_word(s);
  // strtrim(s);
   //puts(s);
   //chuyen_hoa(s);
   //max(s);
   //puts(s);
}
//char[] di tu 0
// int srea(char *s,char *x){
//    if(strstr(s,x)==nullptr) return -1;
//    return strstr(s,x)-s;
// }

// int main() {
//     char s[] = "Hom nay anh quan dep trai";//25 -17
//     char x[]="anh quan";
//     cout<<srea(s,x);
//     return 0;
// }

