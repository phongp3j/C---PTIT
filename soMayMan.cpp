#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    char s[100000];
    while(t--){
        cin>>s;
        if(s[strlen(s)-1]!='6' || s[strlen(s)-2]!='8'){
            cout<<0<<endl;
        }
        else {cout<<1<<endl;}
    }
}