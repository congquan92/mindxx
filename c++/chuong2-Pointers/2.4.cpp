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
    if (p != NULL) {
        l.head = l.head->next;
        delete (p);
    } else {
        l.tail = NULL;
    }
}

void output(myList l) {
    for (node *p = l.head; p != NULL; p = p->next) {
        cout << p->info << " ";
    }
}

int main() {
    myList l = {NULL, NULL};  // Initialize the list
    list_insert_tail(l);
    cout << "Sum = " << sum(l) << endl;
    cout << "Count Prime numbers : " << demNT(l) << endl;
    cout << "Max = " << max(l) << endl;
    chan_le(l);
    cout << "\nDelete first = ";
    delete_first(l);
    output(l);
    return 0;
}
