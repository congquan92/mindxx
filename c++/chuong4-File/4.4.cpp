#include<bits/stdc++.h>  //n cot m dong
using namespace std;

void docFile(int *&a,int &n,int &m){
    FILE *f = fopen("table.inp.txt","r");
    fscanf(f,"%d%d",&n,&m);
    a =new int[m*n];
    for(int i =0;i<m;i++){
        for(int j = 0;j < n; j++){
            fscanf(f,"%d",&*(a+n*i+j));
        }
    }
}

void max_mang(int *a,int m,int n,int &maxx,int &dem ){
    maxx=dem=0;
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            if( maxx < *(a+n*i+j)){
                maxx = *(a+n*i+j);
                dem=1;
            }else{
                if(maxx == *(a+n*i+j)) dem++;
            }
        }
    }
}
void tong_cot_cua_moi_cot(int *a, int n, int m) {
  FILE *f = fopen("4.4.out.txt", "a"); // Mở tập tin "table.out.txt" để ghi
  fprintf(f, "\n**Tổng từng cột:**\n");
  for (int i = 0; i < m; i++) {  // Duyệt qua từng cột (cố định i)
    int sum = 0;  // Khởi tạo tổng bằng 0 cho mỗi cột
    for (int j = 0; j < n; j++) {  // Duyệt qua các phần tử trong cột hiện tại
      sum += *(a + n * j + i);  // Cộng giá trị phần tử vào tổng
    }
    // Ghi kết quả tổng cột vào tập tin
    fprintf(f, "Cột %d: %d\n", i + 1, sum);
  }

}

int main(){
    int *a;
    int m,n,maxx,dem;
    docFile(a,n,m);
    max_mang(a,m,n,maxx,dem);
    FILE *f = fopen("4.4.out.txt","w");
    fprintf(f,"So lon nhat MATRIX : %d",maxx);
    fprintf(f,"  xuat hien : %d",dem);
    fprintf(f,"\n");

    fclose(f);
    
    tong_cot_cua_moi_cot(a,n,m);// 
   


}