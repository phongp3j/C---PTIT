#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int tmp=s[s.length()-2] -'0';
        tmp= tmp*10+ (s[s.length()-1] -'0');
        if(tmp%4==0) cout<<4;
        else cout<<0;
        cout<<endl;
    }
}