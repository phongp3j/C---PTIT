#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while(t--){
		int n;
        cin>>n;
        string s;
        cin.ignore();
        getline(cin,s);
        for(int i=0;i<s.length();i++){
            if(s[0]!=' ') s[0]=towupper(s[0]);
            if(s[i]!=' ' && s[i-1]==' ') s[i]=towupper(s[i]);
            else{
                s[i]=towlower(s[i]);
            }
        }
        stringstream ss(s);
        string tmp;
        vector<string> list;
        while(ss>>tmp){
             list.push_back(tmp);
        }
        if(n==1){
            cout<<list[list.size()-1]<<" ";
            for(auto x=0;x<list.size()-1;x++){
                cout<<list[x]<<" ";
            }
            cout<<endl;
        }
        if(n==2){
            for(auto x=1;x<list.size();x++){
                cout<<list[x]<<" ";
            }
            cout<<list[0];
            cout<<endl;
        }
	}
}