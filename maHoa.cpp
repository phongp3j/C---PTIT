#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int check[1000];
        for(int i=0;i<s.length();i++){
            check[i]=0;
        }
        for(int i=0;i<s.length();i++){
            int dem=1;
            if(check[i]==0){
                for(int j=i+1;j<s.length();j++){
                    if(s[i]==s[j]) {
                        dem++;
                        check[j]=1;
                    }
                }
                cout<<s[i]<<dem;
            }
            
        }
        cout<<endl;
    }
}