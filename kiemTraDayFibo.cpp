#include<iostream>
#include<math.h>
using namespace std;

int soChinhPhuong(int x){
    int s=sqrt(x);
    return (s*s==x);
}

int fibo(int n){
    return (soChinhPhuong(5*n*n+4) || soChinhPhuong(5*n*n-4));
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
            if(fibo(a[i])) cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}