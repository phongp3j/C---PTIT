#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> list;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            list.push_back(x);
        }
        int res=list.size()+1;
        int left=0;
        long long sum=0;
        for(int j=0;j<n;j++){
            sum+=list[j];
            while(sum>s){
                res=min(res,j+1-left);
                sum-=list[left];
                left++;
            }
        }
        res!=list.size()+1 ? cout<<res<<endl:cout<<"-1\n";
    }
}