#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, tmp;
        cin >> s;
        int dem = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 48 && s[i] <= 57)
            {
                dem += (s[i] - '0');
            }
            else
            {
                tmp += s[i];
            }
        }
        sort(tmp.begin(), tmp.end());
        cout << tmp << dem << endl;
    }
}