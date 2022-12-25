#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    char s[200000];
    while(t--){
        cin>>s;
        int dem=0;
        for(int i=0;i<(strlen(s)-1)/2;i++){
            if(s[i]!=s[strlen(s)-i-1] || s[i]%2==1){
                dem++;
                break;
            }
        }
        if(dem!=0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}