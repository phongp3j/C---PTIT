#include<iostream>
#include<algorithm>
using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
         long long n;
         cin>>n;
         long long a[n-1];
         for(int i=0;i<n-1;i++){
             cin>>a[i];
         }
         sort(a,a+n);
         if(a[0]!=1){
             cout<<"1"<<endl;
         }
         else{
             long long dem=0;
             for(int i=0;i<n-1;i++){
                 if((a[i+1]-a[i])>1){cout<<a[i]+1<<endl; break;} 
                 else dem++;
             }
         }

     }
}