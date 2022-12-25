#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int result = 0;
        int i=0;
        while(i<s.length() ){
            string cmp="";
            while( s[i]>='0' && s[i]<='9'){
                cmp=cmp+s[i];
                i++;
                continue;
            }
            
            if(result<atoi(cmp.c_str())) result=atoi(cmp.c_str());
            i++;
        }
        cout<<result<<endl;
    }
}