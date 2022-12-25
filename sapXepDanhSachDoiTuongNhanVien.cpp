#include <bits/stdc++.h>
using namespace std;

int dem = 0;
class NhanVien
{
public:
    string manhanvien, hoten, gioitinh, ngaysinh, diachi, masothue, ngaykyhopdong;

public:
    NhanVien()
    {
        manhanvien = hoten = gioitinh = ngaysinh = diachi = masothue = ngaykyhopdong = "";
    }

    friend ostream &operator<<(ostream &out, NhanVien &a)
    {
        out << a.manhanvien << " " << a.hoten << " " << a.gioitinh << " " << a.ngaysinh << " " << a.diachi << " " << a.masothue << " " << a.ngaykyhopdong << endl;
        return out;
    }
    friend istream &operator>>(istream &in, NhanVien &a)
    {
        dem++;
        if (dem < 10)
            a.manhanvien = "0000" + to_string(dem);
        if (dem >= 10)
            a.manhanvien = "000" + to_string(dem);
        scanf("\n");
        getline(cin, a.hoten);
        scanf("\n");
        cin >> a.gioitinh;
        scanf("\n");
        cin >> a.ngaysinh;
        scanf("\n");
        getline(cin, a.diachi);
        scanf("\n");
        cin >> a.masothue;
        scanf("\n");
        cin >> a.ngaykyhopdong;
        return in;
    }
};

void sapxep(NhanVien list[], int n)
{
    for (int i = 0; i < n; i++)
    { 
        string nam1=list[i].ngaysinh[6]+list[i].ngaysinh[7]+list[i].ngaysinh[8]+list[i].ngaysinh[9];
        for (int j = i+1; j < n; j++)
        {
            string nam2=list[j].ngaysinh[6]+list[j].ngaysinh[7]+list[j].ngaysinh[8]+list[j].ngaysinh[9];
            if(atoi(nam1.c_str())>atoi(nam2.c_str())) swap(list[i],list[j]);
            else if(atoi(nam1.c_str())==atoi(nam2.c_str())){
                string thang1=list[i].ngaysinh[3]+list[i].ngaysinh[4];
                string thang2=list[j].ngaysinh[3]+list[j].ngaysinh[4];
                if(atoi(thang1.c_str())>atoi(thang2.c_str())) swap(list[i],list[j]);
                else if(atoi(thang1.c_str())==atoi(thang2.c_str())){
                    string ngay1=list[i].ngaysinh[0]+list[i].ngaysinh[1];
                    string ngay2=list[j].ngaysinh[0]+list[j].ngaysinh[1];
                    if(atoi(ngay1.c_str())>atoi(ngay2.c_str())) swap(list[i],list[j]);
                }

            }

        }
    }
}
int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    sapxep(ds, N);
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}