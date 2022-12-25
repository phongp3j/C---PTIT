#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int check=-1;
        for(int i=0;i<n;i++){
            if(a[i]==m){
                check=i+1;
                break;
            }
        }
        cout<<check<<endl;
    }
}