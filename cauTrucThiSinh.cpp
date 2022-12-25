#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct ThiSinh{
    string hoten,ngaysinh;
    float diem1,diem2,diem3,tong;
};

void nhap(struct ThiSinh &p){
    
    getline(cin,p.hoten);
    getline(cin,p.ngaysinh);
    cin>>p.diem1>>p.diem2>>p.diem3;
    p.tong=p.diem1+p.diem2+p.diem3;
}

void in(struct ThiSinh &p){
    cout<<p.hoten<<" "<<p.ngaysinh<<" "<<fixed<<setprecision(1)<<p.tong;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}