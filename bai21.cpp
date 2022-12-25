#include <iostream>
using namespace std;

int main(){
    int a[1000000],n,b,t;
    cin>>t;
    while(t--){
        cin>>n>>b;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=b;i<n;i++){
            cout<<a[i]<<" ";
        }
        for(int i=0;i<b;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}