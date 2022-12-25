#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int a[300]={0};
        cin >> s;
        for(int i=0;i<s.length();i++)
        {
            a[int(s[i])]++;
        }
        int max=0;
        int dem=0;
        for(int i=0;i<300;i++)
        {
            if(max<a[i]) max=a[i];
        }
        if(s.length()-max>=max-1) cout << 1 << endl;
        else cout << 0 << endl;
    }
}