#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s,tmp="";
        cin >> s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0' && s[i+1]=='8' && s[i+2]=='4')
            {
                i+=2;
            }
            else
            {
                tmp+=s[i];
            }
        }
        cout << tmp << endl;
    }
}