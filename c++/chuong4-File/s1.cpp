#include<bits/stdc++.h>
using namespace std;
int  isprime(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if( n % i==0) return false;
    }
    return true;
}
int main(){
    FILE *f = fopen("SNT.txt","wt");
    for(int i = 2;i<=100000;i++){
        if(isprime(i)){
            fprintf(f,"%d",i);
            if(isprime(i) % 10 ==0) fprintf(f,"\n");
        }
    }
    fclose(f);
}