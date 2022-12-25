#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[10000],n,c;
        cin>>n>>c;
        int dem=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==c) dem++;
        }
        if(dem==0) cout<<"-1"<<endl;
        else{
            cout<<dem<<endl;
        }

    }
}