#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int max=0;
        for(int i=0;i<n;i++){
            int tg=0;
            for(int j=n-1;j>=0;j--){
                if(a[i]<=a[j]){
                    tg=j-i;
                    break;
                }
            }
            if(tg>max) max=tg;
        }
        cout<<max<<endl;
    }
}