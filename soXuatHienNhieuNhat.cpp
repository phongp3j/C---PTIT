#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        map<int , int > mp;
        for(int i=0;i<n;i++){
             cin>>a[i];
             mp[a[i]]++;
        }
        int max=0,so=0;
        for(auto x : mp){
            if(x.second > max) {
                max=x.second;
                so=x.first;
            }
        }
        if(max>n/2) cout<<so<<endl;
        else cout<<"NO\n";
            }
}