#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
    string manhanvien,hoten,gioitinh,ngaysinh,diachi,masothue,ngaykyhopdong;
    long long tuoi=0;
};

int dem = 0;
void nhap(NhanVien &a){
    dem++;
    if(dem<10){
        a.manhanvien="0000" + to_string(dem);
    }
    if(dem>=10){
        a.manhanvien="000"+to_string(dem);
    }
    scanf("\n");
    getline(cin,a.hoten);
    cin>>a.gioitinh>>a.ngaysinh;
    scanf("\n");
    getline(cin,a.diachi);
    scanf("\n");
    getline(cin,a.masothue);
    scanf("\n");
    cin>>a.ngaykyhopdong;
    for(int i = 6;i<=9;i++){
        a.tuoi = a.tuoi*10+a.ngaysinh[i];
    }
    a.tuoi = a.tuoi*10+a.ngaysinh[0];
    a.tuoi = a.tuoi*10+a.ngaysinh[1];
    a.tuoi = a.tuoi*10+a.ngaysinh[3];
    a.tuoi = a.tuoi*10+a.ngaysinh[4];
}

void sapxep(NhanVien ds[],int N){
    for(int i = 0 ;i < N; i++){
        for(int j = i+1;j<N;j++){
            if(ds[i].tuoi > ds[j].tuoi){
                NhanVien tg;
                tg = ds[i];
                ds[i] = ds[j];
                ds[j] = tg;
            }
        }
    }
}

void inds(NhanVien ds[],int N){
    for(int i = 0 ;i < N; i++){
        cout<<ds[i].manhanvien<<" "<<ds[i].hoten<< " "<<ds[i].gioitinh<<" "<<ds[i].ngaysinh<<" "<<ds[i].diachi<<" "<<ds[i].masothue<<" "<<ds[i].ngaykyhopdong<<endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}

