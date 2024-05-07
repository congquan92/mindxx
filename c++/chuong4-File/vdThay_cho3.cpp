#include<bits/stdc++.h>
using namespace std;
struct sinhvien
{   
    char manv[6];
	char hoten[32];
	int thuong;
    int luong;
    int thuclinh;
};
int main()
{
	FILE *f;
	f=fopen("hoso.dat.txt","rb");
    int t=0;
	sinhvien sv;
    cout<<sizeof(sv)<<endl;
	while(fread(&sv,sizeof(sv),1,f)){	
		t +=sv.thuclinh;
		cout<<sv.manv<<" "<<sv.hoten<<" "<<" thuc linh "<<sv.luong+sv.thuong<<" "<<endl;
	}
    cout<<t;
	fclose(f);
	return 0;
}
// #include <iostream.h>
// struct phanso
// {int tuso;int mauso;};
// phanso ps;
// int main()
// {	FILE *f;
// 	f=fopen("phanso.txt","rb");
// 	int n;n=getw(f);
// 	cout<<n<<endl;
// 	while (fread(&ps,sizeof(ps),1,f))
// 	cout<<ps.tuso<<"/"<<ps.mauso<<endl;
// 	fclose(f);
// 	return 0;
// }