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
            if(tong==n) {cout<<"1"<<endl;}
            else{
                cout<<"0"<<endl;
            }
       }
       else if(a%n==0){
            unsigned long long tong = n*(n-1)/2;
           if(tong*(a/n)==n) {cout<<"1"<<endl;}
            else{
                cout<<"0"<<endl;
            }
       }
       else{
            unsigned long long tong = (n*(n-1)/2) * (a/n);
            for(int i =0;i<=a%n;i++){
                tong += i%n;
            }
            if(tong==n) {cout<<"1"<<endl;}
            else{
                cout<<"0"<<endl;
            }
       }
    }
}