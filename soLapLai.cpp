#include <iostream>
#include <math.h>
using namespace std;

long long GCD(long long a, long long b)
{
    return a % b == 0 ? b : GCD(b, a % b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,x,y;
        cin>>a>>x>>y;
        long long ucln1 = GCD(x,y);
        for(int i=0;i<ucln1;i++){
            cout<<a;
        }
        cout<<endl;
    }
}