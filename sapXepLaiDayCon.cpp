#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n],check[n],k=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                check[k++]=i+1;
            }
        }
        cout<<check[0]<<" "<<check[k-1]<<endl;
    }
}