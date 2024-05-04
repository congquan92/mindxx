#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};

struct mylist{
    node *head, *tail;
};

node* make_node(int x){
    node *p = new node();
    p->data = x;
    p->next = nullptr;
    return p;
}

void chen_cuoi(mylist &l,node *p){
    if(l.head==nullptr){
        l.head=p;
        l.tail = p;
    }else{
        l.tail->next = p;
        l.tail = p;
    }
}
void duyet_cuoi(mylist& l){
    int n,x;
    cout<<" Nhap N= ";cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>x;
        chen_cuoi(l,(make_node(x)));
    }
}

void chen_dau(mylist &l,node *p){
     if(l.head==nullptr){
        l.head=p;
        l.tail = p;
    }else{
        p->next = l.head;
        l.head = p;
}
}
void duyet_dau(mylist &l){
     int n,x;
    cout<<" Nhap N= ";cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>x;
        chen_dau(l,(make_node(x)));
    }
}

void chen_k(mylist &l,int k){
    int x;
    node *p=l.head;
    cout<<"Nhap x can them = ";cin>>x;
    int n = sizeof(l.head);
    if( k <1||k>n+1){
        return;
    }
    if(k == 1){
        chen_dau(l,p);
    }
    if(k == n+1){
        chen_cuoi(l,p);
    }
    
    node *temp =make_node(x);
    for(int i=1;i<=k-2;i++){
        p=p->next;
    }
    p->next = temp->next;
    p->next = temp;
}
void tru(mylist l){
    int n =sizeof(l.head);
    cout<<n;
    int a,b,c,k;
    cout<<" Nhap Vi tri Thu 1 : ";cin>>k;
    cout<<"NHap vi tri thu 2 : ";cin>>c;
    node *p=l.head;
    node *q=l.head;
    if(k > n||k<1||c>n||c<1 ) {
        cout<<"...";
    }
for(int i =1;i<=k-1;i++){
        p=p->next;
    }
     a = p->data;
for(int i =1;i<=c-1;i++){
        q=q->next;
    }
    b = q->data;
cout<<" KQ ="<<a-b;
}
int main(){
    mylist l ={nullptr,nullptr};
    duyet_cuoi(l);
    for(node *p=l.head;p!=nullptr;p=p->next){
        cout<<p->data<<" ";
    }
    tru(l);
}