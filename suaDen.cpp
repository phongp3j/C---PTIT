#include <iostream>
using namespace std;
main()
{
    int a, b1, c;
    cin >> a >> b1 >> c;
    int sum = 0, sum1, k = 0;
    int a1[a + 5], b[a + 5] = {0};
    for (int i = 1; i <= c; i++)
    {
        cin >> a1[i];
        b[a1[i]] = 1;
    }
    for (int i = 1; i <= b1; i++)
    {
        sum += b[i];
    }
    for (int i = b1 + 1; i <= a; i++)
    {
        
            sum1 = 0;
            for (int j = i; j > i - b1; j--)
            {
                sum1 += b[j];
            }
            if (sum > sum1)
                sum = sum1;
        
    }
    cout << sum;
}