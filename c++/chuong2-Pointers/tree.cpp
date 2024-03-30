#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left, *right;
};
//chen trung lap.
int chenNutVaoBst2(node *&root, int k) {
    if (root == nullptr) {
        root = new node();
        if (root == nullptr) return -1;
        root->data = k;
        root->left = root->right = nullptr;
        return 1;
    }

    if (root->data == k) {
        return chenNutVaoBst2(root->right, k);
    }

    if (root->data > k) return chenNutVaoBst2(root->left, k);
    else return chenNutVaoBst2(root->right, k);
}

int chenNutVaoBst(node *&root,int k){ 
    if(root != nullptr){
        if(root->data == k) return 0;
        if(root->data > k) return chenNutVaoBst(root->left,k);
        else{
            return chenNutVaoBst(root->right,k);
        }
    }else{
        root = new node();
        if(root ==nullptr) return -1;
        root->data  = k ;
        root->left = root->right =nullptr;
        return 1;
}
}
void taoBst(node *&root){
    int k,n;
    cout<<" Nhap n = ";cin>>n;
    root = nullptr;
    for(int i=1;i<=n;i++){
        cin>>k;
        chenNutVaoBst2(root,k);
    }
}
void RLN(node *root){
    if(root != nullptr){
        RLN(root->right);
        RLN(root->left);
        cout<<root->data<<" ";
    }
}
void LNR(node *root){
    if(root!=nullptr){
        LNR(root->left);
        cout<<root->data<<" ";
        LNR(root->right);
    }
}
void LRN(node* root){
    if(root != nullptr){
        LRN(root->left);
        LRN(root->right);
        cout<<root->data<<" ";
    }
}
int tong(node *root){
    if(root ==nullptr) return 0;
    return root->data+tong(root->left)+tong(root->right);
}
int main(){
    node *root;
    taoBst(root);
    // LRN(root);cout<<"\n";
    // RLN(root);cout<<endl;
    // LNR(root);
    cout<<tong(root);
}

