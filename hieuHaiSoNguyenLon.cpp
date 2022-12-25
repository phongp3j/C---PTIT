#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a,b,tmp="";
        cin >> a >> b;
        while(a.length()>b.length()) b='0'+b;
        while(a.length()<b.length()) a='0'+a;
        if (b > a)
        {
            string tmp = a;
            a = b;
            b = tmp;
        }
        int nho=0;
        for(int i=a.length()-1;i>=0;i--)
        {
            int x=int(a[i]-'0')-int(b[i]-'0')-nho;
            if(x<0)
            {
                tmp=char(x+10+'0')+tmp;
                nho=1;
            }
            else
            {
                 tmp=char(x+'0')+tmp;
                 nho=0;
            }
        }
        cout << tmp << "\n";
    }
}