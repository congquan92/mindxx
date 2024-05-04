#include<iostream>
using namespace std;
typedef struct CELL *TREE;
struct CELL{
    int data;
    TREE left, right;
};
void InorderTreeWalk(TREE T){
    if(T!=NULL){
        InorderTreeWalk(T->left);
        cout<<T->data<<" ";
        InorderTreeWalk(T->right);
    }
}
void TreeInitialize(TREE &T){
    T=NULL;
}
TREE TreeSearch(TREE T,int k){
    if(T==NULL||k==T->data) return T;
    if(k<T->data) return TreeSearch(T->left,k);
    else return TreeSearch(T->right,k);
}
TREE TreeMinimum(TREE T){
    if(T!=NULL) while(T->left!=NULL) T=T->left;
    return T;
}
TREE TreeMaximum(TREE T){
    if(T!=NULL) while(T->right!=NULL) T=T->right;
    return T;
}
void TreeInsert(TREE &T, int k){
    if(T==NULL){
        T=new(CELL); T->data=k;T->left=NULL;T->right=NULL;
    }else if(k<T->data) TreeInsert(T->left,k);
    else if(k>T->data) TreeInsert(T->right,k);
}
int deletemin(TREE T){
    int min;
    if(T->left==NULL){
        min=T->data;
        T=T->right;
        return min;
    }else return deletemin(T->left);
}
int deletemax(TREE T){
    int min;
    if(T->right==NULL){
        min=T->data;
        T=T->left;
        return min;
    }else return deletemin(T->right);
}
int main(){
    TREE T=new(CELL);
    TreeInitialize(T);
    int k,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        TreeInsert(T,k);
    }
    // TreeInsert(T,20);
    // TreeInsert(T,5);
    cout<<deletemin(T);
    // InorderTreeWalk(T);
    return 0;
}