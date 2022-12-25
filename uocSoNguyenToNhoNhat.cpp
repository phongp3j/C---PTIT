#include<iostream>
#include <math.h>
using namespace std;

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
        int n;
        cin>>n;
        cout<<"1 ";
        for(int i=2;i<=n;i++){
            if(isPrime(i)) cout<<i<<" ";
            else {
                  for(int j=2;j<=i;j++){
                      if(i%j==0 && isPrime(j)) {cout<<j<<" "; break;}
                  }
            }
        }
        cout<<endl;
    }
}