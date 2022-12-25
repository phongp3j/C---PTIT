#include <iostream>
using namespace std;

long long GCD(long long a,long long b){
    return a%b==0?b:GCD(b,a%b);
}

long long LCM(long long a,long long b){
    return a*b/GCD(a,b);
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long soCanTim=1;
        for(int i=1;i<=n;i++)
        {
            soCanTim=LCM(soCanTim,i);
        }
        cout<<soCanTim<<endl;
    }
}