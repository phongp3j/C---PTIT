#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string a, b, tmp, s[100], s2[100];
        getline(cin, a);
        getline(cin, b);
        int lim = 0, res = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != ' ')
            {
                tmp += a[i];
            }
            else
            {
                if (tmp != "")
                {
                    s[lim++] = tmp;
                    tmp = "";
                }
            }
        }
        if (tmp != "")
        {
            s[lim++] = tmp;
            tmp = "";
        }
        for (int i = 0; i < b.length(); i++)
        {
            if (b[i] != ' ')
            {
                tmp += b[i];
            }
            else
            {
                if (tmp != "")
                {
                    s2[res++] = tmp;
                    tmp = "";
                }
            }
        }
        if (tmp != "")
        {
            s2[res++] = tmp;
        }
        for (int i = 0; i < res; i++)
        {
            for (int j = 0; j < lim; j++)
            {
                if (s2[i] == s[j])
                {
                    s[j][0] = '#';
                }
            }
        }
        for (int i = 0; i < lim - 1; i++)
        {
            for (int j = i + 1; j < lim; j++)
            {
                if (s[i] == s[j])
                    s[j][0] = '#';
            }
        }
        sort(s,s+lim);
        for (int i = 0; i < lim; i++)
        {
            if (s[i][0] != '#')
                cout << s[i] << " ";
        }
        cout << endl;
    }
}