#include<bits/stdc++.h>
using namespace std;

void dem_hoa_thuong(char *s){
    int d=0,z=0;
    for(int i =0;i<strlen(s);i++){
        if(isupper(s[i])) d++;
        else if(islower(s[i])) z++;
    }
    cout<<"SL chu hoa : "<<d;
    cout<<"\nSL chu thuong :"<<z;
}

char *lay_tu_phai(char *s){
    char*temp = strrchr(s,' ');
    return temp;
}
char *lay_tu_trai(char *s){
    char *temp = strchr(s,' ');
    *temp= '\0';
    return s;
}
void tu_dai_nhat(char *s){
    int m =0;
    char x[256];
    char *temp = strtok(s," ");
    while(temp !=nullptr){
        if(m < strlen(temp)){
            m = strlen(temp);
            strcpy(x,temp);
        }  
        temp = strtok(nullptr," ");
    }
    cout<<x<<"__"<<m<<" tu"<<endl;
}

void viet_hoa(char *s){
    s = strlwr(s);
    s[0] = s[0] -32;
    char *temp = strchr(s,' ');
    while(temp !=nullptr){
        *(temp+1) = *(temp + 1) -32;
        temp = strchr(temp+1,' ');
    }
    puts(s);
}
void tan_xuat(char *s){
    int d[256] = {0};
    for(int i =0;i<strlen(s);i++){
        d[s[i]]++;
    }
    for(int i =0;i<strlen(s);i++){
        if(d[s[i]] !=0){
            cout<<s[i]<<" xuat hien "<<d[s[i]]<<"lan"<<endl;
            d[s[i]] = 0;
        }
    }
}

void xoa_khoang_trang(char *s){
    char *temp = strchr(s,' ');
    while(temp !=nullptr){
        strcpy(temp,temp+1);
        temp =strchr(temp,' ');
    }
    puts(s);
}
void p_l(char *s){
    int p,l;
    cout<<"xoa may :";cin>>p;
    cout<<"vi tri ";cin>>l;
    strcpy(s+p,s+p+l);//thg trc cpy thg tren .
}
int vi_tri(char *s,char *x){
    char *temp = strstr(s,x);
    int vi_j = -1;
    if(temp != nullptr) vi_j = temp -s;
    return vi_j;
}
void demso_tu(char *s){
    char * temp = strtok(s," ");
    while( temp != nullptr){
        cout<<strlen(temp)<<" ";
        temp = strtok(nullptr," ");
    }
}
void dem_so_cau(char *s){
    int d=1;
    char *temp =strchr(s,' ');
    while(temp != nullptr){
        d++;
        temp =strchr(temp +1 ,' ');
    }
    cout<<d;
}

int main(){
    char s[] = "I am your GOD";
    dem_so_cau(s);
}