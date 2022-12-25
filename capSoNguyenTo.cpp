#include <iostream>
#include <math.h>
using namespace std;

int isPrime(int n){
    if(n<2 ) return 0;
    else{
        for(int i=2;i<sqrt(n);i++){
            if(n%i==0) return 0;
        }
    }
    return 1;
}
int main(){
    int a,t;
    cin>>t;
    while(t--){
        cin>>a;
        for(int i=2;i<=a;i++){
            if(isPrime(i)==1 &&  isPrime(a-i)==1){
                cout<<i<<" "<<a-i;
                break;
            }
        }
        cout<<endl;
    }
}