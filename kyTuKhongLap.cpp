#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char s[1000000];
        cin>>s;
        int check[strlen(s)];
        for(int i=0;i<strlen(s);i++){
            check[i]=0;
        }
        for(int i=0;i<strlen(s);i++){
            if(check[i]==0){
                for(int j=i+1;j<strlen(s);j++){
                  if(s[i]==s[j]) {check[i]=1; check[j]=1;}
              }
            }
            if(check[i]==0) cout<<s[i];
        }
        cout<<endl;

    }
}