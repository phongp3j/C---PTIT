#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        int dem=1;
        for(int i=0;i<s.length()-1;i++)
        {
            if((s[i]==' '|| s[i]=='\n'|| s[i]=='\t')&&(s[i+1]!=' '|| s[i+1]!='\n'|| s[i+1]!='\t'))
            {
                dem++;
            }
        }
        cout << dem << endl;
    }
}