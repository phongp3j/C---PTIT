#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        int check=-1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==m) check=1;
        }
        cout<<check<<endl;
    }
}