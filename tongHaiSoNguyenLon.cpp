#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b, res = "";
        cin >> a >> b;
        while (a.length() < b.length())
            a = "0" + a;
        while (b.length() < a.length())
            b = "0" + b;
        int cur = 0;
        for (int i = a.length() - 1; i >= 0; i--)
        {
            int s = a[i] - '0' + b[i] - '0';
            // cout << s + cur << endl;
            if (s + cur >= 10)
            {
                char x = char((s + cur) % 10 + '0');
                res = x + res;
                cur = 1;
            }
            else
            {
                char x = char(s + cur + '0');
                res = x + res;
                cur = 0;
            }
        }
        if (cur == 1)
            res = "1" + res;
        cout << res << endl;    
        // cout << a << " " << b;
    }
    return 0;
}