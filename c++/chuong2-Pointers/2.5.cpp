#include<bits/stdc++.h>
using namespace std;

struct node {
    int info;
    node *next;
};

struct mylist {
    node *head, *tail;
};

node *get_node(int x) {
    node *p = new node;
    p->next = nullptr;
    p->info = x;
    return p;
}

void get_tail(mylist &l, node *p) {
    if (l.head == nullptr) {
        l.head = p;
        l.tail = p;
    } else {
        l.tail->next = p;
        l.tail = p;
    }
}

void input(mylist &l) {
    int n, x;
    cout << "Nhap n= ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        get_tail(l, get_node(x));
    }
}

int checkPrime(int n) {
    if (n < 2) return -1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return -1;
    }
    return 1;
}

void delete_first(mylist &l) {
    if (l.head == nullptr) {
        cout << "Danh sach rong" << endl;
        return;
    }
    node *temp = l.head;
    l.head = temp->next;
    delete temp;
}

void delete_end(mylist &l) {
    if (l.head == nullptr) {
        cout << "Danh sach rong" << endl;
        return;
    }

    if (l.head == l.tail) {
        delete l.head;
        l.head = l.tail = nullptr;
        return;
    }

    node *p = l.head;
    while (p->next != l.tail) {
        p = p->next;
    }
    delete l.tail;
    l.tail = p;
    l.tail->next = nullptr;
}

void xoa_k(mylist &l,int k){
    int n = sizeof(l.head);//lay so phan tu trong list
    if(k<1||k>n){
        return;
    }
    if(k==1){
        delete_first(l);
    }
    if(k==n){
        delete_end(l);
    }
    node *p = l.head;
    for(int i= 1 ;i <= k-2;i++){
        p=p->next;
    }
    node *temp = p->next;
    p->next=p->next->next;
    delete temp;
}

void delete_Prime(mylist &l) {
    int s = 1;
    for (node *p = l.head; p != nullptr; p = p->next) {
        if (checkPrime(p->info) == 1) {
            xoa_k(l, s);
        }
        s++;
    }
}

void out(mylist l) {
    for (node *p = l.head; p != nullptr; p = p->next) {
        cout << p->info << " ";
    }
}

int main() {
    mylist l = {nullptr, nullptr};
    input(l);
   
   // cout << "Danh sach truoc khi xoa so nguyen to: ";
   // out(l);
    cout << endl;

    delete_Prime(l);

    // cout << "Danh sach sau khi xoa so nguyen to: ";
     out(l);
    // cout << endl;

    return 0;
}
