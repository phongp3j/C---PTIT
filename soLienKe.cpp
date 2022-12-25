#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a;
        cin>>a;
        int tg;
        int dem=0;
        while(a>=10){
            tg=a%10;
            a/=10;
            if(abs(a%10-tg)!=1) dem++;
        }
        if(dem!=0) cout<<"NO\n";
        else cout<<"YES\n";
    }
}