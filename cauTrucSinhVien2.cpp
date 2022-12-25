#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
    string hoten,lop,ngaysinh;
    float gpa;
};

void nhapThongTinSV(SinhVien &a){
    getline(cin,a.hoten);
    scanf("\n");
    getline(cin,a.lop);
    scanf("\n");
    getline(cin,a.ngaysinh);
    if(a.ngaysinh[2] != '/'){
        a.ngaysinh= '0'+a.ngaysinh;
    }
    if(a.ngaysinh[5]!= '/'){
        string tg  = "";
        for(int i = 0 ; i < 3;i++){
            tg = tg + a.ngaysinh[i];
        }
        tg = tg + '0';
        for(int i = 3;i<a.ngaysinh.size();i++){
            tg = tg + a.ngaysinh[i];
        }
        a.ngaysinh = tg;
    }
    cin>>a.gpa;
}

void inThongTinSV(SinhVien &a){
    cout<<"N20DCCN001 "<<a.hoten<<" "<<a.lop<<" "<<a.ngaysinh<<" "<<fixed<<setprecision(2)<<a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}