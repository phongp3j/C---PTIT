#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, m, p, a[100][100], b[100][1000], c[100][100];
    cin >> n >> m >> p;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> a[i][j];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) cin >> b[i][j];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            c[i][j] = 0;
            for (int k = 0; k < m; k++) {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}