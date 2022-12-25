#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b, s[100][100], m[1000], k = 0;
        cin >> a >> b;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> s[i][j];
            }
        }
        while (k < a * b)
        {
            for (int i = 0; i < a / 2 + 1; i++)
            {
                for (int j = i; j < b - i; j++)
                    m[k++] = s[i][j];
                for (int j = i + 1; j < a - i; j++)
                    m[k++] = s[j][b - i - 1];
                for (int j = b - i - 2; j >= i; j--)
                    m[k++] = s[a - i - 1][j];
                for (int j = a - i - 2; j > i; j--)
                    m[k++] = s[j][i];
            }
        }
        for (int i = 0; i < a * b; i++)
            cout << m[i] << " ";
        cout << endl;
    }
}