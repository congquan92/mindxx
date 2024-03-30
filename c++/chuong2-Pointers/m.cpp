#include<bits/stdc++.h>
using namespace std;

struct node{
    int info;
    node *next;
};
struct mylist{
    node *head, *tail;
};
node *get_node(int x){
    node *p = new node;
    p->info = x;
    p->next = nullptr;
    return p;
}
void them_tail(mylist &l,node *p){
   if(l.head==nullptr){
    l.head=p;
    l.tail=p;
   }else{
    l.tail->next=p;
    l.tail=p;
   }
}
void nhap(mylist &l){
    int n,x;
    cout<<" nhap n = ";cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        them_tail(l,get_node(x));
    }
}
void out(mylist l){
    for(node *p=l.head;p!=nullptr;p=p->next){
        cout<<p->info<<" ";
    }
}
int max(mylist l){
    int m=l.head->info;
    for(node *p=l.head;p!=nullptr;p=p->next){
        if(m < p->info) m = p->info;
    }
    return m;
}
int sum(mylist l){
    int s=0;
    for(node *p=l.head;p!=nullptr;p=p->next){
        s += p->info;
    }
    return s;
}
void sx(mylist &l){
     for(node *p=l.head;p!=nullptr;p=p->next){
        for(node *q=p->next;q!=nullptr;q=q->next){
            if(p->info > q->info){
                int t = p->info;
                p->info = q->info;
                q->info = t;
            }
        }
     }
}
void chan_le_am_duong(mylist l){
    int chan=0,le=0,am=0,duong=0;
    for(node *p=l.head;p!=nullptr;p=p->next){
        if(p->info % 2==0){
            chan++;
        }
    }
    cout<<" \nSL Chan = "<<chan<<" cac so do la : ";
    for(node *p=l.head;p!=nullptr;p=p->next){
        if(p->info % 2==0){
            cout<<p->info<<" ";
        }
    }
    for(node *p=l.head;p!=nullptr;p=p->next){
        if(p->info % 2!=0){
            le++;
        }
    }
    cout<<"\nSL le = "<<le<<" cac so do la : ";
    for(node *p=l.head;p!=nullptr;p=p->next){
        if(p->info % 2!=0){
            cout<<p->info<<" ";
        }
    }
    for(node *p=l.head;p!=nullptr;p=p->next){
        if(p->info <=0){
            am++;
        }
    }
    cout<<"\nSL Am = "<<chan<<" cac so do la : ";
    for(node *p=l.head;p!=nullptr;p=p->next){
        if(p->info <=0){
            cout<<p->info<<" ";
        }
    }
    for(node *p=l.head;p!=nullptr;p=p->next){
        if(p->info >=0){
            duong++;
        }
    }
    cout<<" \nduong = "<<chan<<" cac so do la : ";
    for(node *p=l.head;p!=nullptr;p=p->next){
        if(p->info >=0){
            cout<<p->info<<" ";
        }
    }
}
void xoadau(mylist &l){
    node *p = l.head;
    l.head = l.head->next;
    delete(p);
}

int checkNT(int n){
    if(n<2) return -1;
    for(int i=2;i<sqrt(n);i++){
        if(n % i== 0) return -1;
    }
    return 1;
}

void inNT(mylist l){
    for(node *p=l.head;p!=nullptr;p=p->next){
        if(checkNT(p->info)==1) {
            cout<<p->info<<" ";
        }
    }
}

int main(){
    mylist l={nullptr,nullptr};
    nhap(l); 
    cout<<" \nMAx = "<<max(l);
    cout<<" \nSum ="<<sum(l);
    chan_le_am_duong(l);
    cout<<" \nXOa dau :";xoadau(l);out(l);
    cout<<"\n in so ngto : "; inNT(l);
    cout<<" \nDANH SACH SAU KHI SAP XEP : ";sx(l);out(l);
    

}