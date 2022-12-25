#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],kt[n];
        int trung=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            kt[i]=0;
        }
        sort(a,a+n);
        int max=a[n-1];
        int min=a[0];
        int dem=0;
        for(int i=0;i<n;i++){
             if(kt[i]==0){
                 for(int j=i+1;j<n;j++){
                     if(a[i]==a[j]) {dem++; kt[j]=1;}
                 }
             }
        }
        if(max-min+1-n+dem<=0) cout<<"0\n";
        else cout<<max-min+1-n+dem<<endl;
    }
}