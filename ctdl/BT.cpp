#include<iostream>
using namespace std;
typedef struct CELL *TREE;
struct CELL{
    int data;
    TREE left, right;
};
void TreeInitialize(TREE &T){
    T=NULL;
}
void InoderTreeWalk(TREE T){
    if(T!=NULL){
        InoderTreeWalk(T->left);
        cout<<T->data<<" ";
        InoderTreeWalk(T->right);
    }
}
void TreeInsert(TREE &T, int k){
    if(T==NULL){
        T=new(CELL); T->data=k;T->left=NULL;T->right=NULL;
    }else if(k<T->data) TreeInsert(T->left,k);
    else if(k>T->data) TreeInsert(T->right,k);
}
TREE TreeSearch(TREE T,int k){
    if(T==NULL||k==T->data) return T;
    if(k<T->data) return TreeSearch(T->left,k);
    else return TreeSearch(T->right,k);
}
int Tongnut(TREE T){
    if(T==NULL) return 0;
    return 1+Tongnut(T->left) + Tongnut(T->right); 
}
int TongKhoa(TREE T){
    if(T==NULL) return 0;
    return T->data +TongKhoa(T->left)+TongKhoa(T->right);
}
int Tongle(TREE T){
    if(T==NULL) return 0;
    else if(T->data % 2 !=0){
        return T->data + Tongle(T->left)+Tongle(T->right);
    }else{
        return Tongle(T->left)+Tongle(T->right);
    }
}
int bai21(TREE T){
    if(T==NULL) return 0;
    else if(T->left!=NULL && T->right!=NULL){
        return 1 +bai21(T->left) + bai21(T->right);
    }else{
        return bai21(T->left)+bai21(T->right);
    }
}

void bai17(TREE T, int k){
    if(TreeSearch(T,k))
    {
        while(T->data!=k)
        {
            cout<<T->data<<" ";
            if(T->data>k) T=T->left;
            else T=T->right;
        }
    }
}
bool binarysearch(TREE T){
    if(T==NULL || T->left==NULL && T->right==NULL) return true;
    if(T->left==NULL && T->data<T->right->data && binarysearch(T->right)) return true;
    if(T->right==NULL && T->data>T->left->data && binarysearch(T->left)) return true;
    if(T->left->data<T->data && T->right->data>T->data && binarysearch(T->left) && binarysearch(T->right)) return true;
    return false;
}
int main(){
    int k;
    TREE T=new(CELL);
    TreeInitialize(T);
    TreeInsert(T,15);
    TreeInsert(T,7);
    TreeInsert(T,25);
    TreeInsert(T,18);
    TreeInsert(T,30);
    // bai17(T,18);
    // InoderTreeWalk(T);
    if(binarysearch(T)){
        cout<<"true";
    }else cout<<"false";
    // cout<<binarysearch(T);
    return 0;
}