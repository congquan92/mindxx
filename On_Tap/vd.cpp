#include<iostream>
#include<math.h>
using namespace std;
FILE* f1=fopen("tablet.inp","r");
FILE* f2=fopen("tablet.out","w");
int* docfile(int &dong,int &cot){
	int *a=NULL;
	if(f1==NULL){
		printf("khong mo duoc file");
	}
	else{
		fscanf(f1,"%d %d",&dong,&cot);
		a=new int[dong*cot];
		for(int i=0;i<dong;i++){
			for(int j=0;j<cot;j++){
				fscanf(f1,"%d",&a[i*cot+j]);
			}
		}
	}
	return a;
}
int timgtln(int*a, int dong,int cot){
	int max=a[0];
	for(int i=1;i<dong*cot;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
void caua(int*a,int dong ,int cot){
	int dem=0;
	int max=timgtln(a,dong,cot);
	for(int i=0;i<dong*cot;i++){
		if(a[i]==max){
			dem++;
		}
	}
	fprintf(f2,"%d %d \n",max,dem);
}
int tongtren1cot(int*a,int dong,int cot,int cotk){
	int tong=0;
	for(int i=0;i<dong;i++){
		tong+=a[i*cot+cotk];
	}
	return tong;
}
void caub(int*a,int dong,int cot){
	int tongcot=0;
	for(int j=0;j<cot;j++){
		tongcot=tongtren1cot(a,dong,cot,j);
		fprintf(f2,"%d ",tongcot);
	}
}
bool kiemtrangto(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return false;
		}
	}
	return true;
}
int tong1ovuong(int *a,int dongk,int cot,int cotk){
	int b0=a[dongk*cot+cotk],b1=a[dongk*cot+(cotk+1)],b2=a[(dongk+1)*cot+cotk],b3=a[(dongk+1)*cot+(cotk+1)];
	if(kiemtrangto(b0) && kiemtrangto(b1) && kiemtrangto(b2) &&kiemtrangto(b3) ){
		cout<<b0<<" "<<b1<<" "<<b2<<" "<<b3<<endl;
		return b0+b1+b2+b3;
	}
	return -1;
}
void cauc(int*a ,int dong,int cot){
	int max=0,tmp;
	for(int i=0;i<dong-1;i++){
		for(int j=0;j<cot-1;j++){
			tmp=tong1ovuong(a,i,cot,j);
			if(tmp>max){
				max=tmp;
			}
		}
	}
	fprintf(f2,"%d",max);
}
int main(){
	int dong,cot;
	int* a=new int[100];
	a=docfile(dong,cot);
	caua(a,dong,cot);
	caub(a,dong,cot);
	cauc(a,dong,cot);
}