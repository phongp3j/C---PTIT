#include<iostream>
#include<string>
using namespace std;

int main(){
      int t;
      cin>>t;
      while(t--){
          string s;
          cin>>s;
          int dem=s.length();
          for(int i=0;i<s.length();i++){
              for(int j=i+1;j<s.length();j++){
                  if(s[i]==s[j]) dem++;
              }
          }
          cout<<dem<<endl;
      }
}