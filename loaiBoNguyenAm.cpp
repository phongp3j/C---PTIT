#include<bits/stdc++.h>
using namespace std;

// a e i o u y
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y'&& s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U' && s[i]!='Y'){
            if(s[i]>='a' && s[i]<='z') cout<<"."<<s[i];
            else cout<<"."<<char(s[i]+32);
        }
    }
}