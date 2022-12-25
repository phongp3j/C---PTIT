#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int check=0;
        if(s[5]==s[6]-1 && s[6]==s[7]-1 && s[7]==s[9]-1 && s[9]==s[10]-1){
            check=1;
        }
        else if(s[5]==s[6] && s[6]==s[7] && s[7]==s[9] && s[9]==s[10]){
            check=1;
        }
        else if(s[5]==s[6] && s[6]==s[7] && s[9]==s[10]){
            check=1;
        }
        else if((s[5]=='6'||s[5]=='8')&&(s[7]=='6'||s[7]=='8') && (s[6]=='6'||s[6]=='8') && (s[10]=='6'||s[10]=='8') &&(s[9]=='6'||s[9]=='8'))
        {
            check=1;
        }
        if(check==1) cout<<"YES\n";
        else if(check!=1) cout<<"NO\n";
    }
}