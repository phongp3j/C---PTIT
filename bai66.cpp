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
        for(int i=0;i<strlen(s)-1;i++){
            if(s[i]!='0' && s[i]!='6' && s[i]!='8')
            {
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