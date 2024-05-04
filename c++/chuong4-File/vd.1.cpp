#include<fstream>
using namespace std;
void dodaidaycontangdan(int *a,int n){
  int dmax = 1; int dodai=1;int bd =0;
  for(int i =0;i<n-1;i++){
    if(a[i] > a[i+1]){
        dodai++;
    }
    else{
        if(dodai > dmax){
            dmax = dodai;
            bd = i - dodai +1;
            dodai =0;
        }
    }
  }
  if(dodai>dmax){
    dmax = dodai;
    bd = n-dodai;
  }
  fprintf(file,"%d\n",dmax);
  for(int i = bd;i<bd+dmax;i++){
    fprintf(file,"%d ",a[i]);
  }
}