#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[10000],n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        while(k--){
            int l,r;
            cin>>l>>r;
            int tong=0;
            for(int i=l-1;i<r;i++){
                   tong+=a[i];
            }
            cout<<tong<<endl;
        }
    }
}