#include<iostream>
using namespace std;
#define modulo 1000000007

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        long long tong=0;
        for(int i=0;i<n;i++){
            long long tich=1;
            for(int j=n-i-1;j>0;j--){
                tich=(tich*x)%modulo;
            }
            tong+=(a[i]*tich)%modulo;
        }
        cout<<tong%modulo<<endl;
    }
}