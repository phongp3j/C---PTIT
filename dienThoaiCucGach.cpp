#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, tmp;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] -= 32;
            if (s[i]>='A' && s[i] <= 'C')
                tmp += '2';
            if (s[i] >= 'D' && s[i] <= 'F')
                tmp += '3';
            if (s[i] >= 'G' && s[i] <= 'I')
                tmp += '4';
            if (s[i] >= 'J' &&  s[i] <= 'L')
                tmp += '5';
            if (s[i] >= 'M' &&s[i] <= 'O')
                tmp += '6';
            if (s[i] >= 'P' && s[i] <= 'S')
                tmp += '7';
            if (s[i] >= 'T' && s[i] <= 'V')
                tmp += '8';
            if (s[i]>= 'W'  && s[i] <= 'Z')
                tmp += '9';
        }
        int res=0;
        for(int i=0;i<tmp.length();i++)
        {
            if(tmp[i]!=tmp[tmp.length()-1-i])
            {
                cout << "NO" << endl;
                res=1;
                break;
            }
        }
        if(res==0) cout << "YES\n";
    }
}