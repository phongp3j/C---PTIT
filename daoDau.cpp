#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    long long a[n];
    long long tong = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int chiSoAm=0;
    for(int i=0;i<n-1;i++){
        if(a[i]<0 && a[i+1]>=0) {
            chiSoAm=i+1;
            break;
        }
    }
    for(int i=chiSoAm+1;i<n;i++) 
        tong += a[i];
    if(m<chiSoAm+1){
        for(int i=0;i<chiSoAm;i++){
            if(i+1<m) tong+=-a[i];
            else tong+=a[i]+a[chiSoAm];
        }
    }
    if(m>=chiSoAm+1){
       for(int i=0;i<chiSoAm;i++){
           tong+=-a[i];
       }
       tong+= (m-chiSoAm)*(-1)*a[chiSoAm];
    }
    cout << tong;
}