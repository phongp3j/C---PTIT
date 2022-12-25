#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n, a[1005][10], dem = 0, dem1 = 0, dem0 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) cin >> a[i][j];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] == 1) dem1++;
            if (a[i][j] == 0) dem0++;
        }
        if (dem1 > dem0) dem++;
        dem1 = 0;
        dem0 = 0;
    }
    cout << dem;
}