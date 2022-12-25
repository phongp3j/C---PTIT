#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, s[100000], kt[100000] = {0};
        cin >> a >> b;
        int n = a + b;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            kt[s[i]]++;
        }
        sort(s,s+n);
        for (int i = 0; i < 100000; i++)
        {
            if (kt[i] != 0)
                cout << i << " ";
        }
        cout << endl;
        for (int i = 0; i < 100000; i++)
        {
            if (kt[i] > 1)
                cout << i << " ";
        }
        cout << endl;
    }
}