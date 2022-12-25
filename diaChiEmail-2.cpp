#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    map<string,int> list;
    while (t--)
    {
        string s;
        getline(cin, s);
        string res = "";
        for (int i = s.length() - 1; i >= 0; i--)
        {
            s[i] = towlower(s[i]);
        }
        int chiSo = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == ' ')
            {
                chiSo = i;
                break;
            }
            res = s[i] + res;
        }
        if(s[0]!=' ') res = res + s[0];
        for(int i=0;i<=chiSo;i++){
            if(s[i]!=' ' && s[i-1]==' ')
            {
                res = res + s[i];
            }
        }
        list[res]++;
        if(list[res]>1) cout<<res<<list[res]<<"@ptit.edu.vn"<<endl;
        else cout<<res<<"@ptit.edu.vn"<<endl;
    }
}