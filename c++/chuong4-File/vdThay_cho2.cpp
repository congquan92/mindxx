#include<bits/stdc++.h>
using namespace std;

int main(){
    FILE*f=fopen("frac_bs.txt","rb");
    int n,d=0;
    int *a;
    n=getw(f);cout<<n<<endl;
    a=new int[n];
    for(int i =0;i<n;i++){
        *(a+i) = getw(f);
        *(a+i+1) = getw(f);
        if((*(a+i) / *(a+i+1)) < 1 ) {
            cout<<*(a+i)<<"/"<<*(a+i+1)<<" "; 
            d++;
        }
    }cout<<endl<<d;
}