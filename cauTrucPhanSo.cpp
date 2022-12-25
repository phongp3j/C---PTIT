#include<iostream>
using namespace std;

long long GCD(long long a,long long b){
    return a%b==0?b:GCD(b,a%b);
}
struct PhanSo
{
    long long a,b;
};

void nhap(struct PhanSo &p){
    cin>>p.a>>p.b;
}

void rutgon(struct PhanSo &p){
    long long ucln=GCD(p.a,p.b);
    p.a=p.a/ucln;
    p.b=p.b/ucln;
}

void in(struct PhanSo &p){
    cout<<p.a<<"/"<<p.b;
}

int main(){
    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}