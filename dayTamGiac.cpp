#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[10000],n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max=a[0];
        for(int i=0;i<n;i++){
            if(a[i]>max){
               max=a[i];
            }
        }
        cout<<max<<endl;
    }
}