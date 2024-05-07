#include<bits/stdc++.h>
using namspace std;

FILE *f =fopen("table.inp","rb");
FILE *f =fopen("table.out","wb");

struct phanso{
   int tuso;
    int mauso;
};
phanso ps;
int main()
{	
	f=fopen("phanso.txt","rb");
	int n;n=getw(f);
	cout<<n<<endl;
	while (fread(&ps,sizeof(ps),1,f))
	cout<<ps.tuso<<"/"<<ps.mauso<<endl;
	fclose(f);
	return 0;
}
