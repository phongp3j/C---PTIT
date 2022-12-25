#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int dem = 0,tong=0;
        for (int i = 0; i < s.length(); i++)
        {
            dem += (s[i] - '0');
           
        }
        if(dem>9)
        {
            int x=dem;
            while(dem>9)
            {
                tong+=x%10;
                x/=10;
                if(x==0)
                {
                    dem=tong;
                    tong=0;
                    x=dem;
                }
            }
        }
        if(dem==9) cout << 1 << endl;
        else cout << 0 << endl;
    }
}