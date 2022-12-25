#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,a[n][k],b[n*k],c=0;
        cin>>n>>k;
        for(int i=0;i<k;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                b[c++]=a[i][j];
            }
        }
        int swap;
        for(int i=0;i<c;i++){
            for(int j=i+1;j<c;j++){
                if(b[i]>b[j]){
                    swap=b[i];
                    b[i]=b[j];
                    b[j]=swap;
                }
            }
        }
        for(int i=0;i<c;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}