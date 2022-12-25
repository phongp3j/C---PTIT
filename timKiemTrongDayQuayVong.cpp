#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        long long a[10000000];
        for(long long i=0;i<n;i++){
            cin>>a[n];
        }
        for(long long i=0;i<n;i++){
            if(a[i]==x) cout<<i+1<<" ";
        }
        cout<<endl;
    }
}