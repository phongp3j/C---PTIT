
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int a[200]={0};
        int n;
        cin >> s >> n;
        for(int i=0;i<s.length();i++)
        {
            a[s[i]]=1;
        }
        int dem=0;
        for(int i=97;i<123;i++)
        {
            if(a[i]==1) dem++;
        }
        int x=26-dem;
        if(n>=x) cout << 1 << endl;
        else cout << 0 << endl;
    }
}