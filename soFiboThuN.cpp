#include <iostream>
using namespace std;

long long fibo(long long n){
    long long a1=1,a2=1;
    if(n<=2) return 1;
    else{
        long long i=3,a;
        while(i<=n){
            a=a1+a2;
            a1=a2;
            a2=a;
            i++;
        }
        return a;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<fibo(n)<<endl;
    }
}