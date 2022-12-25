#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[10000],n,m;
        cin>>n>>m;
        int tg;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    tg=a[i];
                    a[i]=a[j];
                    a[j]=tg;
                }
            }
        }
        cout<<a[m-1]<<endl;
    }
}