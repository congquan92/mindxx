#include<bits/stdc++.h>
using namespace std;
int main(){
    FILE *f; srand(time(NULL));
    f=fopen("num1.txt","wt");
    int n=100000000;
    fprintf(f,"%d\n",n);
    for(int i=1;i<=n;i++){
        fprintf(f,"%6d",rand());
        if(i%10==0)
        fprintf(f,"\n");
    }
    fclose(f);
    return 0;
}
