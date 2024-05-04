#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};
struct mylist{
    node *head, *tail;
};

node *make_node(int n){
    node * p = new node();
    if(p == nullptr){
        exit(1);
    }
    p->data = n;
    p->next = nullptr;
    return p;
}

void chen_sau(mylist &l,node *p){
    if(l.head==nullptr){
        l.head = p ;
        l.tail = p;
    }else{
        l.tail->next = p;
        l.tail = p;
    }
}
void duyet_ds_tail(mylist &l){
    int n,x;
    cout<<"Nhap SL : ";cin>>n;
    for(int i = 1;i <= n; i++){
        cin>>x;
        chen_sau(l,make_node(x));
    }
}
void out(mylist l){
    for(node *p = l.head; p!=nullptr;p=p->next){
        cout<<p->data<<" ";
    }
}
int sum(mylist l){
    int s =0;
     for(node *p = l.head; p!=nullptr;p=p->next){
        s += p->data;
    }
    return s;
}

void xoa_dau(mylist &l){
    node *t = l.head;
    l.head  = l.head ->next;
    delete t;
}
void xoa_cuoi(mylist &l){
    node *t =l.head;
    while(t->next != l.tail){
        t = t->next;
    }
    delete l.tail;
    l.tail = t;
    l.tail->next = nullptr;
}
void xoa_vitri_k(mylist &l,int k){
    int n =sizeof(l.head);
    if(k > n+1||k < 1){
        cout<<"Loi ";
    }
    if(k == 1){
        xoa_dau(l);
    }
    if(k==n){
        xoa_cuoi(l);
    }
    node *t= l.head;
    for(int i =1 ; i<=k-2;i++){
        t=t->next;
    }
    node *q = t->next;
    t->next = t->next->next;
    delete q;
}
int main(){
    mylist l = {nullptr,nullptr};
    duyet_ds_tail(l);
    //xoa_dau(l);
    //xoa_cuoi(l);
    int k =3;
    xoa_vitri_k(l,k);
    out(l);
}