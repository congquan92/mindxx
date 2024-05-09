#include<bits/stdc++.h>
using namespace std;

FILE *f = fopen("test.inp","r");
FILE *f1 =fopen("test.out","w");

void so_dong(){
    int d = 0;
    while(!feof(f)){
        char s[512];
        fgets(s,512,f);
        d++;
    }
    fprintf(f1,"So dong : %d\n",d);
}

void xuat_hien(){
    f = fopen("test.inp","r");
    char x[] = "round";
    int d = 0;
    while(!feof(f)){
        char s[512];
        fgets(s,512,f);

        char *temp = strstr(s,x);
        while(temp != nullptr){
            d++;
            temp = strstr(temp+1,x);
        }
    }
    fprintf(f1,"tu do xuat hien : %d lan\n",d);
}

void tu_dai(){
    f=fopen("test.inp","r");
    int d = 0;
    char x[512];
    while (!feof(f)){
        char s[512];
        fgets(s,512,f);

        char *temp = strtok(s," ");
        while(temp != nullptr){
            if(d < strlen(temp)){
                d = strlen(temp);
                strcpy(x,temp);
            }
            temp = strtok(nullptr," ");
        }
    }
    fprintf(f1,"max_w : %s dai %d . \n",x,d);
}
void dem_cau(){
    f = fopen("test.inp","r");
    int p =1;
    while(!feof(f)){
        char s[512];
        fgets(s,512,f);
        int d=1;

        char *temp = strchr(s,' ');
        while(temp != nullptr){
            d++;
            temp = strchr(temp+1,' ');
        }

        fprintf(f1,"Hang %d : %d cau \n",p,d);
        p++;
    }
}
void dem_tu(){
    f = fopen("test.inp","r");
    int d;
    while(!feof(f)){
        char s[512];
        fgets(s,512,f);

        char *temp = strtok(s," ");
        while(temp != nullptr){
            d =strlen(temp);
            fprintf(f1,"%d ",d);
            temp = strtok(nullptr," ");
        }

        fprintf(f1,"\n");
    }
}
void lay_tu_trai_phai(){
    f = fopen("test.inp","r");
    while(!feof(f)){
        char s[512];
        fgets(s,512,f);

        char x[512];
        char r[512];
        char *temp = strchr(s,' ');
        char *t =strrchr(s,' ');
        strcpy(r,t);
        *temp = '\0';
        strcpy(x,s);

        fprintf(f1,"%s %s\n",x,r);
    }
}


int main(){
    so_dong();
    xuat_hien();
    tu_dai();
    dem_tu();
    dem_cau();
    lay_tu_trai_phai();
}