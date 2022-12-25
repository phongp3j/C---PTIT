#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
        vector<string> list;
        queue<string> q;
        q.push("9");
        for(int i=0;i<=10000;i++){
            string s1=q.front();
            q.pop();
            list.push_back(s1);
            string s2=s1;
            q.push(s1.append("0"));
            q.push(s2.append("9"));
        }
        for(auto x:list){
            unsigned long long tmp=0;
            for(int i=0;i<x.length();i++){
                tmp=(x[i]-'0')+tmp*10;
            }
            if(tmp%n==0) {
                cout<<tmp<<endl;
                
            }
        }
    }
}