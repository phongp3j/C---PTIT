#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[100000],n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=n-1;i>=n/2;i--){
            if(i!=n-1-i) cout<<a[i]<<" "<<a[n-1-i]<<" ";
            if(i==n-1-i) cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}