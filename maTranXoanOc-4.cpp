#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    int p[10000], k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            p[k++] = a[i][j];
        }
    }
    sort(p, p + k);
    k = 0;
    while (k < n * n)
    {
        for (int i = 0; i < n / 2 + 1; i++)
        {
            for (int j = i; j < n - i; j++)
            {
                a[i][j] = p[k++];
            }
            for(int j=i+1;j<n-i;j++){
                a[j][n-i-1]=p[k++];
            }
            for(int j=n-2-i;j>=i;j--){
                a[n-i-1][j]=p[k++];
            }
            for(int j=n-2-i;j>i;j--){
                a[j][i]=p[k++];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}