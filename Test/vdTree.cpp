#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left, *right;
};

node *make_node(int n){
    node* p = new node();
    p->data = n;
    p->left = p->right = nullptr;
    return p;
}

void chen(node *&tree, int k){
    if(tree == nullptr){
        tree = make_node(k);
        return;
    }
    if(tree->data > k) return chen(tree->left,k);
    return chen(tree->right,k); 
}

void duyet(node *&tree){
    int n,x;
    cout<<"Nhap n = ";cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        chen(tree,x);
    }
}

int sum(node *tree){
    if(tree == nullptr) return 0;
    return tree->data + sum(tree->left) + sum(tree->right);
}
int max(node *tree){
    while(tree->right != nullptr){
        tree = tree->right;
    }
    return tree->data;
}
void tim_x(node *tree,int x){
    if(tree == nullptr) return ;
    cout<<tree->data<<" ";
    if(tree->data == x) return;
    if(tree->data > x) return tim_x(tree->left,x);
    return tim_x(tree->right,x);
}
int main(){
    node *tree = nullptr;
    duyet(tree);
    int x;
    cout<<max(tree)<<endl;
    cout<<"nhap so can tim : ";cin>>x; tim_x(tree,x);
}
