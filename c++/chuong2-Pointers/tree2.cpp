#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left, *right;
};

node *make_node(int x){
    node *p = new node();
    p->data = x;
    p->left = p->right = nullptr;
    return p;
}

void chen(node *&root,int k){
    if(root ==nullptr){
       root= make_node(k);
        return;
    }
    if(root->data == k ){
        return chen(root->right,k);
    }
    if(root->data > k) return chen(root->left,k);
    return chen(root->right,k);
}

void duyet(node *&tree){
    int n,x;
    cout<<" Nhap n=";cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        chen(tree,x);
    }
}

int tong(node *root){
    if(root == nullptr) return 0;
    return root->data+tong(root->right)+tong(root->left);
}

int max(node *root){
    while(root->right != nullptr){
        root=root->right;
    }
    return root->data;
}

void duong_di(node *root,int x){
    
    if(root==nullptr) return;
    cout<<root->data<<" ";
    if(root->data ==x) return;
    if(root->data > x) duong_di(root->left,x);
    return duong_di(root->right,x);
}

int main(){
    int x;
    node *root=nullptr ;
    duyet(root);
    cout<<tong(root)<<endl;
    cout<<" MAX="<<max(root)<<endl;
    cout<<" NHap so can tim = ";cin>>x;
    duong_di(root,x);

}