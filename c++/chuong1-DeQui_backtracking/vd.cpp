#include<bits/stdc++.h>
using namespace std;
//1.1

//c
int sum(int n){
    int s=1;
    for(int i=1;i<=n;i++){
        s*=i;
    }
    if(n==1) return 1;

    return s+sum(n-1);
}
//d
int sum1(int n){
    int s=1;
    for(int i=0;i<=n;i++){
        s*=(n+i);
    }
    if(n==1) return 2;

    return s+sum(n-1);
}
//1.2
//a
void sum2(int f[],int n){
     
     f[1]=1;
     f[2]=1;
    for(int i=3;i<=n;i++){
        f[i]=f[i-1]+(i-1)*f[i-2];
    }
    cout<<f[n];

}

//b
int sum11(int n){
    if(n==1||n==2) return 1;
    return sum11(n-1)+(n-1)*sum11(n-2);
}
//1.3
//c
double xn(int n){
    if(n==0) return 1;
    return xn(n-1)/3+yn(n-1)/2+27;
}
double yn(int n){
    if(n==0) return 2;
    return xn(n-1)/5+yn(n-1)/7+11;
}
//d


int main(){
    int n;cin>>n;
    yn(n);
    
    cout<<xn(n);
//    int f[1000];
//     sum2(f,n);
    
  
    cout<<" ket qua cau c "<<sum(n);
    // cout<<" \nket qua cau d"<<sum(n)-1;

// cout<<endl;
//     cout<<sum11(n);
}