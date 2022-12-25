#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        long long dau=a[0]*a[1],cuoi=a[n-1]*a[n-2];
        cout<<dau<<" ";
        for(long long i=1;i<n-1;i++){
             cout<<a[i+1]*a[i-1]<<" ";
        }
        cout<<cuoi<<endl;

    }
}