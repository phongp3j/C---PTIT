#include <bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
    if (n < 2)
        return 0;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return 0;
        }
    }
    return 1;
}

int check(int n){
    int tong=0;
    while(n!=0){
        if(isPrime(n%10)==0) return 0;
        else {
            tong+=n%10;
            n=n/10;
        }
    }
    if(isPrime(tong)==0) return 0;
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int dem = 0;
        if (a < b)
        {
            for (int i = a; i <= b; i++)
            {
                if (check(i)==1)
                {
                    if(isPrime(i) == 1) dem++;
                }
            }
            cout << dem << endl;
        }
        else
        {
            for (int i = b; i <= a; i++)
            {
                if (check(i)==1)
                {
                    if(isPrime(i) == 1) dem++;
                }
            }
            cout << dem << endl;
        }
    }
}