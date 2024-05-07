#include<bits/stdc++.h>
using namespace std;

FILE *f = fopen("num1.inp","r");
FILE *f1= fopen("num.out","w");

void lay_tu_trai(){
    int n;
    char ch;
    fscanf(f,"%d%c",&n,&ch);
    for(int i =0;i<n;i++){
        char s[256];
        fgets(s,256,f);
        char *x = strchr(s,' ');
        *x ='\0';
        puts(s);
    }
}
void lay_tu_ben_phai(){
    f= fopen("num1.inp","r");
    char ch;
    int n;
    fscanf(f,"%d%c",&n,&ch);
    for(int i = 0;i<n;i++){
        char s[256];
        fgets(s,256,f);
        char *x =strrchr(s,' ')+1;
        // *x ='\0';
        puts(x);
    }
}
// dung ki ko bt nos co bao nhieu dong
void lay_tubenphai(){
    f= fopen("num1.inp","r");
    while (!feof(f)){
    char s[256];
	fgets(s,512,f);
	char *x=strrchr(s,' ')+1;
    puts(x);	
	}

}
void dem_sodong(){
    f =fopen("str.txt","r");
    int d =0;
    while(!feof(f)){
        char s[256];
        fgets(s,256,f);
        d++;
    }
    cout<<d;
}
void docchieudai(){
     f =fopen("num1.inp","r");
    int d =0;
    while(!feof(f)){
        char s[256];
        fgets(s,256,f);
        d=strlen(s);
        cout<<d-1<<" ";
    }
    
}
int main(){
    // lay_tu_trai();
    // cout<<endl;
    // lay_tu_ben_phai();
    // lay_tubenphai();
    dem_sodong();
    //docchieudai();
}