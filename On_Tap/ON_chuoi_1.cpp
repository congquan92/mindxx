#include<bits/stdc++.h>
using namespace std;

void cau_1(char *s){
    int d,z;
    d=z=0;
    for(int i =0;i<strlen(s);i++){
        if(islower(s[i])) {d++;}
        else if(isupper(s[i])) {z++;}
    }
    cout<<"so luong thuong la : "<<d<<endl;
    cout<<"So luong chu hoa :"<<z<<endl;
}
void cau_2(char *s){
    for(int i=0;i<strlen(s);i++){
        cout<<(int)s[i]<<" ";
    }
}
void cau_3(char *s){
    s = strlwr(s);
    s[0] = s[0] - 32;
    char *temp = strchr(s,' ');
    while(temp!=nullptr){
        *(temp +1) =*(temp +1) - 32;
        temp = strchr(temp+1,' ');
    }
}
void cau_4(char *s){
    int d=1;
    char *temp = strchr(s,' ');
    while(temp !=nullptr){
        d++;
        temp= strchr(temp+1,' ');
    }
    cout<<"so tu :"<<d;
}
void cau_5(char *s){
    char *temp = strtok(s," ");
    while (temp != nullptr){
        cout<<strlen(temp)<<" ";
        temp = strtok(nullptr," ");
    }
}
void cau_6(char *s){
    char* temp = strtok(s," ");
    int m =0;
    char x[256];
    while(temp != nullptr){
        if(m < strlen(temp)){
            m = strlen(temp);
            strcpy(x,temp);  
        }
        temp = strtok(nullptr," ");
    }
    cout<<"cau dai nhat :"<<x<<"_sl:"<<m;
}
void cau_7(char *s){
    for(int i =0;i<strlen(s)-1;i++){
        for(int j = i+1;j<strlen(s);j++){
            if(int(s[i]) > int(s[j])&& s[i] !=' ' && s[j]!=' '){
                swap(s[i],s[j]);
            }
        }
    }
    for(int i =0;i<strlen(s);i++){
        cout<<int(s[i])<<" ";
    }
}
void cau_8(char *s){
    int d[256] ={0};
    for(int i=0;i<strlen(s);i++){
        d[s[i]]++;
    }
    for(int i =0;i<strlen(s);i++){
        if(d[i] !=0){
            cout<<s[i]<<" xuat hien "<<d[s[i]]<<endl;
            d[s[i]]=0;
        }
    }
}
void cau_9(char *s){
    //c1
//    char* tmp =strchr (s,' ');
//     while (tmp!=NULL){
//         strcpy(tmp, tmp +1 );//dich-nguon
//         tmp = strchr (tmp,' ');
//     }
    //c2
    int d =0;
    for(int i =0;i<strlen(s);i++){
        if(!(isspace(s[i]) && isspace(s[i+1])));
            s[d++] = s[i];
    }
    s[d]='\0';
}
char *cau_10(char *s){
    return strrchr(s,' ');
}
char *cau_11(char *s){
    char *temp = strchr(s,' ');
    *temp =' \0';
    return s;
}
void cau_12(char *s){
    int k;cout<<"SL can xoa : ";cin>>k;
    int p;cout<<"vi tri bat dau :";cin>>p;
    // char *temp = new char[strlen(s)+1];
    // strcpy(temp,s+k+p-1);
    // s[p-1]='\0';
    // strcat(s,temp); //dau-cuoi
    
    //c2
    strcpy(s+p,s+p+k);
    puts(s);
}
int cau_14(char *s, char *x){
    char *temp =strstr(s,x);
    int vitri = -1;
    if(temp != nullptr) {vitri = temp -s;}
    
    return vitri;
}
int cau_15(char *s, char *x){
    char *temp =strstr(s,x);
    int d=0;
    while(temp != nullptr){
        d++;
        temp = strstr(temp+1,x);
    }
    return d;
}
void cau_16(char *s1,char*s2){
    int p;
    cout<<"Vi tri : ";cin>>p;
    strcpy(s1+p,s2);
    puts(s1);
}
int main(){
    char s1[] ="I am a God_" ;
    char s3[]="a";
    char s2[] ="anh la quan " ;
    cout<<cau_15(s1,s3);
    //puts(s);  

}