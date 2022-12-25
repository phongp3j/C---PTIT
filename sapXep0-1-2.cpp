#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[1000000],n;
        cin>>n;
        int dem0=0,dem2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0) dem0++;
            if(a[i]==2) dem2++;
            
        }
        for(int i=0;i<dem0;i++) cout<<"0 ";
        for(int i=0;i<n-dem2-dem0;i++) cout<<"1 ";
        for(int i=0;i<dem2;i++) cout<<"2 ";
        cout<<endl;
    }
}