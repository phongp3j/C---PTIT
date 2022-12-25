#include<bits/stdc++.h>
using namespace std;

string chuanHoa(string s){
    s[0]=toupper(s[0]);
    for(int i=1;i<s.length();i++){
        s[i]=tolower(s[i]);
    }
    return s;
}

bool check(char c){
    if(c=='.' || c=='?' || c=='!') return true;
    else return false;
}
int main(){
    string s;
    vector<string> vs;
    string tmp="";
    while(cin>>s){
         if(check(s[s.length()-1])){
             s=s.erase(s.length()-1);
             tmp+=s;
             vs.push_back(tmp);
             tmp="";

         }
         else tmp+= s + " ";
    }
    for(auto x : vs ){
        cout<<chuanHoa(x)<<endl;
    }
}