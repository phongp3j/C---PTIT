#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for(long long i=0;i<n;i++) cin>>a[i];
        long long ktra[15];
        for (long long i = 0; i <= 9; i++)
        {
            ktra[i] = 1;
        }
        for (long long i = 0; i < n; i++)
        {
            if(a[i]==0) ktra[0]=0;
            while (a[i] != 0)
            {
                if (ktra[a[i] % 10] != 0)
                {
                    ktra[a[i] % 10] = 0;
                }
                a[i] /= 10;
            }
        }
        for(long long i=0;i<=9;i++){
            if(ktra[i]==0) cout<<i<<" ";
        }
        cout<<endl;
    }
}