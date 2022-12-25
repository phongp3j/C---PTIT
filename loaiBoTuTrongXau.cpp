#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, s, tmp;
    getline(cin, a);
    cin >> s;
    string st[100];
    int lim = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != ' ')
            tmp += a[i];
        else
        {
            st[lim++] = tmp;
            tmp = "";
        }
    }
    st[lim++] = tmp;
    for (int i = 0; i < lim; i++)
    {
        if (st[i] != s)
            cout << st[i] << " ";
    }
    return 0;
}