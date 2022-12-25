#include <iostream>
#include <math.h>
using namespace std;

int GCD(int a,int b){
    return a%b==0?b:GCD(b,a%b);
}

int isPrime(int n){
    if(n<2) return 0;
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int dem=0;
        for(int i=1;i<=x;i++){
            if(GCD(i,x)==1) dem++;
        }
        if(isPrime(dem)==1) cout<<"1\n";
        else cout<<"0\n";
    }
}