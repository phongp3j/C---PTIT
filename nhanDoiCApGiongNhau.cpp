#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int dem = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                a[i] *= 2;
                a[i + 1] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                dem++;
            else
                cout << a[i] << " ";
        }
        for (int i = 0; i < dem; i++)
            cout << 0 << " ";
        cout << endl;
    }
    return 0;
}