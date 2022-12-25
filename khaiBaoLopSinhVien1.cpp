#include <bits/stdc++.h>
using namespace std;
#define a() a
class SinhVien
{
public:
    string msv, hoten, lop, ngaysinh;
    float gpa;

public:
    SinhVien()
    {
        msv = hoten = lop = ngaysinh = "";
        gpa = 0;
    }
    friend void nhap(SinhVien &);
    friend void in(SinhVien);
};

void nhap(SinhVien &a)
{
    a.msv = "B20DCCN001";
    getline(cin, a.hoten);
    scanf("\n");
    cin >> a.lop;
    scanf("\n");
    cin >> a.ngaysinh;
    scanf("\n");
    if (a.ngaysinh[2] != '/')
        a.ngaysinh = "0" + a.ngaysinh;
    if (a.ngaysinh[5] != '/')
        a.ngaysinh.insert(3, "0");
    cin >> a.gpa;
}

void in(SinhVien a)
{
    cout << a.msv << " " <<"Nguyen Van A" << " " << a.lop << " " << a.ngaysinh << " " << fixed << setprecision(2) << a.gpa << endl;
}
int main()
{
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}