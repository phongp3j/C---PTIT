#include <iostream>
using namespace std;

long long GCD(long long a, long long b)
{
    return a % b == 0 ? b : GCD(b, a % b);
}

long long LCM(long long a, long long b)
{
    return a * b / GCD(a, b);
}

struct PhanSo
{
    long long a, b;
};

void nhap(struct PhanSo &p)
{
    cin >> p.a >> p.b;
    long long ucln = GCD(p.a, p.b);
    p.a = p.a / ucln;
    p.b = p.b / ucln;
}

struct PhanSo tong(struct PhanSo &p,struct PhanSo &q){
    long long bcnn = LCM(p.b,q.b);
    struct PhanSo tong;
    tong.a=p.a*(bcnn/p.b)+q.a*(bcnn/q.b);
    tong.b=bcnn;
    long long ucln=GCD(tong.a,tong.b);
    tong.a=tong.a/ucln;
    tong.b=tong.b/ucln;
    return tong;

}
void in(struct PhanSo &p)
{
    cout << p.a << "/" << p.b;
}

int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}