#include <bits/stdc++.h>
using namespace std;
#define a() a

class NhanVien
{
public:
    string mnv, hoten, gioitinh, ngaysinh, diachi, masothue, ngaykyhopdong;

public:
    NhanVien()
    {
        mnv = "00001";
        hoten = gioitinh = ngaysinh = diachi = masothue = ngaykyhopdong = "";
    }

    friend ostream &operator<<(ostream &out, NhanVien a);
    friend istream &operator>>(istream &in, NhanVien &);
};

ostream &operator<<(ostream &out, NhanVien a)
{
    out << a.mnv << " " << a.hoten << " " << a.gioitinh << " " << a.ngaysinh << " " << a.diachi << " " << a.masothue << " " << a.ngaykyhopdong << endl;
    return out;
}

istream &operator>>(istream &in, NhanVien &a)
{
    getline(cin, a.hoten);
    scanf("\n");
    cin >> a.gioitinh;
    cin >> a.ngaysinh;
    scanf("\n");
    getline(cin, a.diachi);
    scanf("\n");
    cin >> a.masothue;
    cin >> a.ngaykyhopdong;
    return in;
}

int main()
{
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}