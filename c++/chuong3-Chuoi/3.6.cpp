#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

struct Employee { 
    char Ma[100]; 
    char name[100];
    char date[100]; 
    long long salary;
    long long bonus; 
    long long netSalary;
};

void inputEmployees(Employee nv[], int &n) {
    cout << "Enter the number of employees (n): "; cin >> n;
    for (int i = 0; i <n; i++) { 
        cout<<"DS Thu : "<<i+1<<endl;
        cout << "  Employee ID (Ma): ";cin.ignore();cin.getline(nv[i].Ma,100);
        cout << "  Name: ";cin.ignore(); cin.getline(nv[i].name, 100);
        cout << "  Date (DD/MM/YYYY): ";cin.ignore(); cin.getline(nv[i].date,100);
        cout << "  Salary: ";cin >> nv[i].salary;
        cout << "  Bonus: ";cin >> nv[i].bonus; 
        nv[i].netSalary=nv[i].bonus+nv[i].salary;
    }
}

void outputEmployees(Employee nv[], int n) {
    cout << "\nEmployee Details:\n";int d=1;
    for (int i = 0; i < n; i++) {
        cout<<"STT :"<<d<<endl;
        cout << "  Employee ID (Ma): " << nv[i].Ma << endl;
        cout << "  Name: " << nv[i].name << endl;
        cout << "  Date (YYYYMMDD format): " << nv[i].date << endl; 
        cout << "  Salary: " << nv[i].salary << endl;
        cout << "  Bonus: " << nv[i].bonus << endl;
        cout << "  Net Salary: " <<nv[i].netSalary<< endl;
        d++;
    }
}
void sxNet(Employee nv[],int n){
    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(nv[i].netSalary > nv[j].netSalary){
                swap(nv[i].netSalary,nv[j].netSalary);
            }
        }
    }
}
void sxMA(Employee nv[],int n){
    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
           if(strcmp(nv[i].Ma,nv[j].Ma) > 0 ){
                swap(nv[i],nv[j]);
           }
        }
    }
}

int main() {
   Employee nv[1000];
   int n;
   inputEmployees(nv,n);
   sxMA(nv,n);
   outputEmployees(nv,n);
   return 0;
}
