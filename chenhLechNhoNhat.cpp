#include <iostream>
#include <math.h>
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
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
            cout << a[0] << endl;
        else
        {
            sort(a,a+n);
            long long min = abs(a[0] - a[1]);
            for(int i=0;i<n;i++){
                if(min>abs(a[i]-a[i+1])) min=abs(a[i]-a[i+1]);
            }
            cout<<min<<endl;
        }
    }
}