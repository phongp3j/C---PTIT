#include<bits/stdc++.h>
using namespace std;

int minSwaps(vector<int>&nums)
	{
	    vector<pair<int,int>> v;
	    pair<int,int> p;
	    for(int i=0;i<nums.size();i++){
	        p.first=nums[i];
	        p.second=i;
	        v.push_back(p);
	    }
	    sort(v.begin(),v.end());
	    int dem=0;
	    for(int i=0;i<nums.size();i++){
	        if(v[i].second==i){
	            continue;
	        }
	        else{
	            swap(v[i],v[v[i].second]);
	            dem++;
	            i--;
	        }
	    }
	    return dem;
	}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
             int x;
             cin>>x;
             v.push_back(x);
        }
        cout<<minSwaps(v)<<endl;
    }
}