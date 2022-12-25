#include <iostream>
using namespace std;

// ý tưởng là tìm các số từ 1  đến p thỏa mãn %p =1 sau đó tìm số lớn nhất trong khoảng từ 1 đến n có dạng x+i*p rồi tính số các số từ x đến x+i*p
long long findCountOfSolutions(long long n, long long p)
{
    long long ans = 0;
    for (long long x=1; x<p; x++)
    {
        if ((x*x)%p == 1)
        {
            long long last = x + p * (n/p);
            if (last > n)
                last -= p;
            ans += ((last-x)/p + 1);
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, p;
        cin >> a >> p;
        cout<<findCountOfSolutions(a,p)<<endl;
    }
}