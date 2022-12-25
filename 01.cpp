#include<bits/stdc++.h>
using namespace std;

string trans(string s){
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]>='A' && s[i] <='Z'){
            s[i]=s[i]+32;
        }
    }
    return s;
}

int main(){
    ifstream ip1("DATA1.in");
    ifstream ip2("DATA2.in");
    set<string> s1;
    set<string> s2;
    string s3,s4;
    while(ip1>>s3){
        s1.insert(trans(s3));
    }
    while(ip2>>s4){
        s2.insert(trans(s4));
    }
    set<string> res1;
    set<string> res2;
    for(auto x : s1){
        res1.insert(x);
        if(s2.find(x) != s2.end()){
            res2.insert(x);
        }
    }
    for(auto x : s2){
        res1.insert(x);
    }
    for(auto x : res1){
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto x : res2){
        cout<<x<<" ";
    }
    cout<<endl;
}


