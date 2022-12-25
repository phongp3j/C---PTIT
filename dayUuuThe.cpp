#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int c=0,l=0,n=0;
        char kiTu=' ';
        while(kiTu!='\n'){
            int x;
            cin>>x;
            n++;
            if(x%2==0) c++;
            else l++;
            kiTu=getchar();
        }
        if(n%2==0 && c>l  || (n%2==1 && c<l)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}