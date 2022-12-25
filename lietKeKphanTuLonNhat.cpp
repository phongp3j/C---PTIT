#include<iostream>
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
        int swap;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]<a[j]){
                    swap=a[i];
                    a[i]=a[j];
                    a[j]=swap;
                }
            }
        }
        for(int i=0;i<k;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
}