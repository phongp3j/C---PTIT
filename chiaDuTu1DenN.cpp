#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,n;
        cin>>a>>n;
       if(a<n){
            unsigned long long tong= a*(a+1)/2;
        cout<<tong<<endl;
       }
       else if(a%n==0){
            unsigned long long tong = n*(n-1)/2;
            cout<<tong*(a/n)<<endl;
       }
       else{
            unsigned long long tong = (n*(n-1)/2) * (a/n);
            for(int i =0;i<=a%n;i++){
                tong += i%n;
            }
            cout<<tong<<endl;
       }
    }
}