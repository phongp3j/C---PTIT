#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
        int n;
        cin >> n;
        int a[n], check[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            check[i] = 0;
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (check[i] == 0)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (a[i]==a[j]) check[j]=1;
                }
                cout<<a[i]<<" ";
            }
        }
}