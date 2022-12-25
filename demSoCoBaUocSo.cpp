#include<iostream>
#include<math.h>
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
        long long a;
        int dem=0;
        cin>>a;
        for(long long i=2;i*i<=a;i++){
            if(isPrime(i) && i*i<=a) dem++;
        }
        cout<<dem<<endl;
    }
}