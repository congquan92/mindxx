#include<bits/stdc++.h>
using namespace std;
struct tree{
    int data;
    tree* left , *right;
};
tree *make(int x){
    tree *p=new tree();
    p->data = x;
    p->left = p->right = nullptr;
    return p;
}
void chen(tree* &root,int x){
    if(root == nullptr){
        root = make(x);
        return;
    }
    if(root->data == x) return chen(root->right,x);
    if(root->data < x) return chen(root->right,x);
    return chen(root->left,x);
}
void duyet(tree*&root){
    int n,x;
    cout<<" Nhap N=";cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        chen(root,x);
}
}
int tong(tree* root){
    if(root == nullptr) return 0;
    return root->data+tong(root->right)+tong(root->left);
}
int MAX(tree *root){
    while(root->right !=nullptr){
        root = root->right;
    }
    return root->data;
}
int demNUT(tree* root){//so cay con cua nut do
    if(root==nullptr) return 0;
    return 1+demNUT(root->right)+demNUT(root->left);
}
int demNUTLA(tree *root){
    if(root ==nullptr) return 0;
    if(root->left==nullptr&&root->right==nullptr) return 1;
    return demNUTLA(root->left)+demNUTLA(root->right);
}
// int demnutco1caycon(tree *root){
//     if(root==nullptr) return 0;
//     if(root->left==nullptr)
// }
int max(int a,int b){
    if(a > b )return a;
    return b;
}
int h(tree *root){
    if(root==nullptr) return 0;
    int l=h(root->left);
    int r=h(root->right);
    return max(l,r)+1;
}
int main(){
    tree *root =nullptr;
    duyet(root);
    cout<<"tong"<<tong(root)<<endl;
    cout<<"MAx= "<<MAX(root)<<endl;
    cout<<"Dem nut"<<demNUT(root)<<endl;
    cout<<"dem nut la "<<demNUTLA(root)<<endl;
    cout<<"chieu cao "<<h(root);
}