#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

    FILE *f = fopen("str.inp", "rt");
    FILE *f1 = fopen("str.out", "wt");

void a() {
    int n;
    char ch;
    fscanf(f,"%d%c",&n,&ch);
    //cout<<n;
    //cout<<ch;
    fprintf(f1,"cau a:\n");
    for(int i = 0; i < n; i++) {
        char s[256];
        fgets(s, 256, f); // đọc dòng đầu tiên
        //puts(s);
        char *t = strtok(s, " ");
        int m = 0;
        char *x;
        while(t != nullptr) {
            if(strlen(t) > m) {
                m = strlen(t);
                x = t;
            }
            t = strtok(nullptr, " ");
        }
        fprintf(f1, "%s\n", x);
    }
}
void b() {
    f = fopen("str.inp", "rt");
    int n;
    char ch;
    fscanf(f, "%d%c",&n,&ch);
    //cout<<ch;
    fprintf(f1,"cau b:\n");
    for (int i = 0; i < n; i++) {
        char s[256];
        fgets(s, 256, f);
        // puts(s);
        char *l = strchr(s, ' ');
        if (l != NULL) {
            *l = '\0';
            //puts(s);
            char *r = strrchr(l + 1, ' ');//r da lay khoang trang
            if (r != NULL) {
                fprintf(f1, "%s%s",s,r);
            }
        }
    }
}
void c(){
    f = fopen("str.inp","rt");
    int n;
    char ch;
    fprintf(f1,"\ncau c:\n");
    fscanf(f,"%d%c",&n,&ch);
    char x[256];    
    int m = 0;
    for(int i=0;i < n;i++){
        char s[256];
        fgets(s,256,f);
        //puts(s);
        if(strlen(s) > m){
            m = strlen(s);
            //cout<<m;
            strcpy(x,s);// dich-nguon
            //puts(x);
        }
    }
    fprintf(f1,"%s",x);
}
int dem_dong(char *s){
    char *t=strchr(s,' '); 
    int d = 0;
    while (t !=nullptr){
        d++;
        t = strchr(t+1,' ');
    }
    return d+1;
}
void d(){
    f=fopen("str.inp","r");
    char ch;
    int n;
    int d=0;
    fscanf(f,"%d%c",&n,&ch);
    for(int i =0;i<n;i++){
        char s[256];
        fgets(s,256,f);//f la doc tu file f
        d+=dem_dong(s);
    }
    fprintf(f1,"cau d:\n %d",d);
}
int main() {
    if(f == nullptr || f1 == nullptr) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    a();
    b();
    c();
    d();
    fclose(f);
    fclose(f1);
    return 0;
}
