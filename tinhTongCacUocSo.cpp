#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long sum;
        if(n==1){
            sum=1;
        }
        else{
            sum=n+1;
            for(long long i=2;i<=sqrt(n);i++){
            if(n%i==0) {
                if(n%(n/i)==0 && n/i!=i) {
                    sum+=i;
                    sum+=n/i;
                }
                else {
                    sum+=i;
                }
            }
        }
        }
        cout<<sum<<endl;
    }
}