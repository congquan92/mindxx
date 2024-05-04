#include<iostream>
#include<cstring>
using namespace std;
FILE* file=fopen("str.inp","r");
FILE* file1=fopen("str.out","w");
char* timTulonnhat (char* s){
    int max = 0;
    char* batdau =s;
    char* batdauMax = s;
    char* tmp = strchr(s,' ');
    while(tmp!=NULL){
        if(tmp-batdau>max){
            max = tmp-batdau;
            batdauMax = batdau;
        }
        batdau = tmp + 1;
        tmp = strchr(tmp+1,' ');
    }
    if(max < strlen(batdau)){
        max = strlen(batdau);
        batdauMax = batdau;
    }
    *(batdauMax + max) = '\0';
    return batdauMax;
}
void caua(){
	fprintf(file1,"CAU a:\n");
	char* s=new char[100];
	char* tmp=new char[100];
	while(fgets(s,256,file)!=NULL){
		tmp=timTulonnhat(s);
		fprintf(file1,"%s",tmp);
        fprintf(file,"\n");
	}
}
void laytubenphaivatrai(char* s){
    char* tutrai=strchr(s,' ');
    *tutrai='\0';
    fputs(s,file1);
    char* tuphai=strrchr(tutrai+1,' ');
    fprintf(file1,"%s\n",tuphai);
}
void caub(){
	fprintf(file1,"CAU b:\n");
	FILE* file=fopen("str.inp","r");
	char* tmp=new char[100];
	while(fgets(tmp,256,file)!=NULL){
		laytubenphaivatrai(tmp);
	}
}
void cauc(){
	fprintf(file1,"\nCAU c:\n");
	FILE* file=fopen("str.inp","r");
	char* tmp=new char[100];
	fgets(tmp,256,file);
	int max=strlen(tmp);
	int dodai=0;
	char* chuoimax=new char[100];
	while(fgets(tmp,256,file)!=NULL){
		dodai=strlen(tmp);
		if(dodai>max){
			max=dodai;
			strcpy(chuoimax,tmp);//do chuoi tmp bi thay doi noi dung thanh ra khi chuoimax=tmp thi no van chi vao o nho do nhung khi ket thuc noi dung o nho do lai la dong cuoi
		}
	}
	fprintf(file1,"%s",chuoimax);
}
int demtutren1dong(char* s){
	int dem=0;
	char* tmp=strchr(s,' ');
	while(tmp!=NULL){
		dem++;
		tmp=strchr(tmp+1,' ');
	}
	return dem+1;
}
void caud(){
	fprintf(file1,"CAU d:\n");
	FILE* file=fopen("str.inp","r");
	int sotu=0;
	char* s=new char[100];
	while(fgets(s,256,file)!=NULL){
		sotu+=demtutren1dong(s);
	}
	fprintf(file1,"%d",sotu);
}
int timtuyourtren1dong(char* s){
	int dem=0;
	char* tmp=strstr(s,"your");
	while(tmp!=NULL){
		dem++;
		tmp=strstr(tmp+1,"your");
	}
	return dem;
}
void caue(){
	fprintf(file1,"\nCAU e:\n");
	FILE* file=fopen("str.inp","r");
	char* s=new char[100];
	int tong=0;
	while(fgets(s,256,file)!=NULL){
		tong+=timtuyourtren1dong(s);
	}
	fprintf(file1,"%d",tong);
}
int main(){
    int n;
    fscanf(file,"%d",&n);
	caua();
	/*caub();
	cauc();
	caud();
	caue();*/
	fclose(file);
	fclose(file1);
}