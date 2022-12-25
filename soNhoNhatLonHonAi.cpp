#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> list;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            list.push_back(a[i]);
        }
        sort(list.begin(),list.end());
        for(int i=0;i<n;i++){
            auto chiSo=upper_bound(list.begin(),list.end(),a[i]);
            if(chiSo!=list.end()) cout<<list[chiSo-list.begin()]<<" ";
            else cout<<"_ ";
        }
        cout<<endl;
    }
}