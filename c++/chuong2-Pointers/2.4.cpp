#include <bits/stdc++.h>
using namespace std;

struct node {
    int info;
    node *next;
};

struct myList {
    node *head, *tail;
};

int sum(myList l) {// dat ten tranh chu list ra =)) 
    int s = 0;
    for (node *p = l.head; p != NULL; p = p->next) {
        s = s + p->info;
    }
    return s;
}

int checkNT(int n) {
    if (n < 2)
        return -1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return -1;
    }
    return 1;
}

int demNT(myList l) {
    int dem = 0;
    for (node *p = l.head; p != NULL; p = p->next) {
        if (checkNT(p->info) == 1) {
            dem++;
        }
    }
    return dem;
}

void chan_le(myList l) {
    int chan = 0, le = 0;
    for (node *p = l.head; p != NULL; p = p->next) {
        if (p->info % 2 == 0) {
            chan++;
        } else {
            le++;
        }
    }
    cout << " so chan la : " << chan << endl;
    cout << " so le la : " << le;
}

int max(myList l) {
    int m = l.head->info;
    for (node *p = l.head; p != NULL; p = p->next) {
        if (p->info > m)
            m = p->info;
    }
    return m;
}

node *getnode(int x) {
    node *p = new node;
    if (p == NULL)
        exit(1);
    p->info = x;
    p->next = NULL;
    return p;
}

void insert_tail(myList &l, node *p) {
    if (l.head == NULL) {
        l.head = p;
        l.tail = p;
    } else {
        l.tail->next = p;
        l.tail = p;
    }
}

void list_insert_tail(myList &l) {
    int x, n;
    cout << "Nhap vao so n = ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        insert_tail(l, getnode(x));
    }
}

void delete_first(myList &l) {
    node *p = l.head;
    l.head=l.head->next;
    delete p;
}

void output(myList l) {
    for (node *p = l.head; p != NULL; p = p->next) {
        cout << p->info << " ";
    }
}
void sx(myList &l){
    for(node *p=l.head;p!=nullptr;p=p->next){
        for(node*q=p->next;q!=nullptr;q=q->next){
            if(p->info > q->info){
                int t = p->info;
                p->info = q->info;
                q->info = t;
            }
        }
    }
}
void delete_end(myList &l){
    if (l.head==nullptr)
      cout << "Empty list!" << endl;
    if (l.head == l.tail){
      delete l.head;
      l.head = l.tail = NULL;
   }
    node *temp = l.head;
    while(temp->next !=l.tail){
        temp=temp->next;
    }
    delete l.tail;
    l.tail=temp;
    l.tail->next=nullptr;
    
}
void xoa_k(myList &l){
    int n = sizeof(l.head);//lay so phan tu trong list
    int k;
    cout<<" nhap vi tri k = ";cin>>k;
    if(k<n||k>n){
        return;
    }
    if(k==1){
        delete_first(l);
       return;
    }
    node *p = l.head;
    for(int i= 1 ;i <= k-2;i++){
        p=p->next;
    }
    
    node *temp = p->next;
    p->next=p->next->next;
    delete temp;
}
int main() {
    
    myList l = {NULL, NULL};  // Initialize the list
    list_insert_tail(l);
    // cout << "Sum = " << sum(l) << endl;
    // cout << "Count Prime numbers : " << demNT(l) << endl;
    // cout << "Max = " << max(l) << endl;
    // chan_le(l);
    // cout<<" \nDanh sach sau khi sap xep : ";
    // sx(l);output(l);
    //cout<<"\n Delete end = ";
    //delete_end(l);
    // cout << "\nDelete end = ";
   // delete_first(l);
   cout<<"\nxoa vi tri bat ky :\n ";
    xoa_k(l);cout<<endl;
    output(l);
    return 0;
}
