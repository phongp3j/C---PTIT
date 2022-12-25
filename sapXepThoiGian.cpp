#include <bits/stdc++.h>
using namespace std;

struct time
{
    int gio, phut, giay;
};

void nhap(struct time &p)
{
    cin >> p.gio >> p.phut >> p.giay;
}

int main()
{
    int n;
    cin >> n;
    struct time list[n];
    for (int i = 0; i < n; i++)
        nhap(list[i]);
    struct time tg;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (list[i].gio > list[j].gio)
            {
                tg = list[i];
                list[i] = list[j];
                list[j] = tg;
            }
            else if (list[i].gio == list[j].gio)
            {
                if (list[i].phut > list[j].phut)
                {
                    tg = list[i];
                    list[i] = list[j];
                    list[j] = tg;
                }
                else if (list[i].phut == list[j].phut)
                {
                    if (list[i].giay > list[j].giay)
                    {
                        tg = list[i];
                        list[i] = list[j];
                        list[j] = tg;
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<list[i].gio<<" "<<list[i].phut<<" "<<list[i].giay<<endl;
    }
}