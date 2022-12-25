#include<iostream>
#include<string>

using namespace std;

int main()

{
    string s,a[100];
    string tmp="";
    getline(cin,s);
    int m=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            tmp+=s[i];
        }
        else
        {
            a[m++]=tmp;
            tmp="";
        }
    }
    a[m++]=tmp;
    for(int i=0;i<m;i++)
    {
        if(i!=m-1)
        {
            if(a[i][0]>96) a[i][0]-=32;
        for(int j=1;j<a[i].length();j++)
        {
           
            if(a[i][j]<91) a[i][j]+=32;
        }
        }
        else
        {
            for(int j=0;j<a[i].length();j++)
            {
                if(a[i][j]>96) a[i][j]-=32;
            }
        }
    }
    for(int i=0;i<m-1;i++)
    {
        if(i==m-2) cout << a[i] << ", ";
        else cout << a[i] << " ";
    }
    cout << a[m-1];
}