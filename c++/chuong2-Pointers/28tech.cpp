#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
struct mylist{
    node *head, *tail;
};

node*make_node(int x){
    node *p = new node();
    p->data = x;
    p->next = nullptr;
    return p;
}

void get_tail(mylist &l, node *p){

    if(l.head==nullptr){
        l.head=p;
        l.tail=p;
    }else{
        l.tail->next = p;
        l.tail = p;
    }
}
void insert_tail(mylist &l){
    int n,x;
    cout<<" Nhap N = ";cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        get_tail(l,make_node(x));
    }
}

void get_head(mylist &l, node *p){
   
    if(l.head==nullptr){
        l.tail=p;
        l.head=p;
    }else{
        p->next = l.head;
        l.head = p;
    }
}
void insert_head(mylist &l){
    int n,x;
    cout<<" Nhap N = ";cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        get_head(l,make_node(x));
    }
}

void get_k(mylist &l,int k){
    int n =sizeof(l.head);
    int x;
    cout<<" Phan Tu Them Vao : ";cin>>x;
    node *p = l.head;
    if( k < 1 || k > n+1 ){
        return;
    }
    if(k==1){
        get_head(l,p);
    }
    if(k==n+1){
        get_tail(l,p);
    }
    for(int i=1;i<=k-2;i++){
        p=p->next;
    }
    node *t = make_node(x);
    t->next = p->next;
    p->next = t;
}

void out(mylist l){
    for(node *p=l.head;p!=nullptr;p=p->next){
        cout<<p->data<<" ";
    }
}

void Delete_first(mylist &l){
    node *p = l.head;
    l.head = l.head->next;
    delete p;
}

void Delete_end(mylist &l){
   node *p=l.head;
   while(p->next != l.tail){
    p=p->next;
   }
   delete l.tail;
   p = l.tail;
   l.tail->next = nullptr; 
}

void Delete_K(mylist &l){
    int n=sizeof(l.head);
    int k;
     cout<<" Nhap Vi Tri K = ";cin>>k;
    if(k==1){
        Delete_first(l);
    }
    if(k>n){
        cout<<" Sai cu Phap !!";
    }
    if(k==n){
        Delete_end(l);
    }
    node *p =l.head;
    for(int i=1;i<=k-2;i++){
        p=p->next;
    }
    node *temp = p->next;
    p->next=p->next->next;
    delete temp;
}

int Check(int x){
    if(n<2) return -1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return -1;
    }
    return 1;
}

void Prime(mylist l){
    for(node *p=l.head;p!=nullptr;p=p->next){
        if(Check(p->data==1)) cout<<p->next<<" ";
    }
}

void Sum(mylist l){
    int s = 0;
   for(node *p=l.head;p!=nullptr;p=p->next){
        s += p->data;
    }
    cout<<" Sum : "<<s;
}

void chan_le(mylist l){
    int c=0,l=0;
    for(node *p=l.head;p!=nullptr;p=p->next){
        if(p->data % 2==0){
            c++;
        }else{
            l++;
        }
    }
cout<<" So Luong Phan Tu Chan Cua Danh Sach : "<<c<<".Gom Cac So : ";
    for(node *p=l.head;p!=nullptr;p=p->next){
        if(p->data % 2==0){
           cout<<p->data<<" ";
    }
    }
cout<<" So Luong Phan Tu Le Cua Danh Sach : "<<l<<".Gom Cac So : ";
    for(node *p=l.head;p!=nullptr;p=p->next){
        if(p->data % 2 != 0){
           cout<<p->data<<" ";
    }
}
}

void MaXX(mylist l){
    int m =l.head;
    for(node *p=l.head;p!=nullptr;p=p->next){
        if(m<p->data) m = p->data;
    }
    cout<<" Max = "<<m;
}

void swap(int &a,int &b){
    int t=a;a=b;b=t;
}
void Sortt(mylist l){
    for(node *p=l.head;p!=nullptr;p=p->next){
        for(node *q=p->next;q!=nullptr;q=q->next){
            if(p->data > q->data){
                swap(p->data,q->data);
            }
        }
    }
}


int main(){
    mylist l={nullptr,nullptr};
   
    
    while(1){
        cout<<"\n_________________________________\n";
        cout<<"1.Them Dau.\n";
        cout<<"2.Them Sau.\n";
        cout<<"3.Them Giua.\n";
        cout<<"4.In Danh Sach.\n";
        cout<<"5.Xoa Phan Tu Dau.\n";
        cout<<"6.Xoa Phan Tu Cuoi.\n";
        cout<<"7.Xoa Phan Tu Thu K.\n";
        cout<<"8.Danh Sach Chua Cac So NgTo.\n";
        cout<<"9.So Luong Chan Va Le Cua Danh Sach.\n";
        cout<<"10.Phan Tu Lon Nhat Cua Danh Sach.\n";
        cout<<"11.Tong Cac Phan Tu Trong Danh Sach.\n";
        cout<<"12.Sap Xep Tang.\n"
        cout<<"13.Thoat\n";
        cout<<"____________________________________\n";
        cout<<"Nhap Lua chon : ";
        int lc;cin>>lc;
        if(lc==1){
             insert_head(l);
        }
        if(lc==2){
            insert_tail(l);
        }
        if(lc==3){
            int k;
            cout<<"\nNhap vi tri k =  ";cin>>k;
            get_k(l,k);
        }
        if(lc==4){
          out(l);  
        }
        if(lc==5){
            Delete_first(l);
        }
        if(lc==6){
            Delete_end(l);
        }
        if(lc==7){
            Delete_K(l);
        }
        if(lc==8){
            Prime(l);
        }
        if(lc==9){
            chan_le(l);
        }
        if(lc==10){
            MaXX(l);
        }
        if(lc==11){
            Sum(l);
        }
        if(lc==12){
            Sortt(l);
        }
        if(lc==13){
            break;
        }
    }
}
