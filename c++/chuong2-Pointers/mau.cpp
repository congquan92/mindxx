#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
};

struct mylist {
    node *head, *tail;
};

node *get_node(int x) {
    node *p = new node();
    p->data = x;
    p->next = nullptr;
    return p;
}

void Tail(mylist &l, node *p) {
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
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        Tail(l, get_node(x));
    }
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
void delete_first(mylist &l) {
    if (l.head == nullptr) {
        cout << "Danh sach rong" << endl;
        return;
    }
    node *p = l.head;
    l.head = l.head->next;
    delete p;
}

void delete_primes(mylist &l) {
    node *p = l.head;
    node *prev = nullptr;

    while (p != nullptr) {
        if (isPrime(p->data)) {
            if (prev != nullptr) {
                prev->next = p->next;
                delete p;
                p = prev->next;
            } else {
                delete_first(l);
                p = l.head;
            }
        } else {
            prev = p;
            p = p->next;
        }
    }
}

void out(mylist l) {
    node *p = l.head;
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
}

int main() {
    mylist l = {nullptr, nullptr};
    input(l);

    cout << "Danh sach truoc khi xoa so nguyen to: ";
    out(l);
    cout << endl;

    delete_primes(l);

    cout << "Danh sach sau khi xoa so nguyen to: ";
    out(l);
    cout << endl;

    return 0;
}
