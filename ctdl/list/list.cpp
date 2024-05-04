#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
struct mylist{
    node *head, *tail;
};


node *new_node(int x){
    node *p =new node();
     p->data = x;
     p->next = nullptr;
    return p;
}
void in_tail(mylist &l,node *p){
    if(l.head==nullptr){
        l.head = p;
        l.tail = p;
    }else{
        l.tail->next = p;
        l.tail = p;
    }
}
void chen(mylist &l){
    int n,x;
    cout<<"Nhap N = ";cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>x;
        in_tail(l,new_node(x));
    }
}
void out(mylist l){
    for(node *p = l.head;p!=nullptr;p=p->next){
        cout<<p->data<<" ";
    }
}
void chen_trc_k(mylist &l){
    int k,x;
    cout<<"Nhap x= ";cin>>x;
    cout<<"Nhap viti k = ";cin>>k;
    int n = sizeof(l.head);
    if( k < 1|| k >n+1){
        cout<<" Sai ";
    }
    node *temp = l.head;
    for(int i=1;i<=k-2;i++){
        temp =temp->next;
    }
    node* p = new_node(x);
    p->next = temp->next;
    temp->next = p;
}
void chen_sau_k(mylist &l){
    int k,x;
    cout<<"Nhap x= ";cin>>x;
    cout<<"Nhap viti k = ";cin>>k;
    int n = sizeof(l.head);
    if( k < 1|| k >n+1){
        cout<<" Sai ";
    }
    node *temp = l.head;
    for(int i=1;i<=k-2;i++){
        temp =temp->next;
    }
    node* p = new_node(x);
    p->next = temp->next->next;
    temp->next->next = p;
}
void chen_head(mylist &l,int &x){
    cout<<"Nhap x = ";cin>>x;
    node *p =l.head;
    node* temp = new_node(x);
    temp->next = p;
    l.head = temp;

}
int main(){
    mylist l ={nullptr,nullptr};
    chen(l);
    chen_trc_k(l);
      for(node *p = l.head;p!=nullptr;p=p->next){
        cout<<p->data<<" ";
    }
}