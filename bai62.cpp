#include<iostream>
#include <string.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   char s;
   while(t--){
       cin>>s;
       if(s>='A' && s<='Z'){
             s=s+32;
       }
       else if(s>='a' && s<='z'){
             s=s-32;       
       }
       cout<<s<<endl;
   }
}