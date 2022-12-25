#include <iostream>
#include <math.h>
using namespace std;

//hàm kiểm tra số nguyên tố
int SNT(int a)
{
    if (a < 2)
        return 0;
    else
    {
        for (int i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
                return 0;
        }
    }
    return 1;
}
int main()
{
    int n, a, t;
    cin >> t;
    while (t--)
    {
        cin >> n >> a;
        int dem = 0;
        for (int i = 2; i <= n; i++)
        {

            if (n % i == 0 && SNT(i) == 1)
            {

                while (n % i == 0)
                {
                    dem++;
                    n = n / i;
                    if (dem == a)
                    {
                        cout << i << endl;
                        break;
                    }
                }
            }
        }
        if (dem < a)
        {
            cout << -1 << endl;
        }
    }
}