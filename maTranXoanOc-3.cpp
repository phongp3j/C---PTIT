#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[n][m];
        int p[10000],d=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        while(d<n*m){
            for(int i=0;i<n/2+1;i++){
                for(int j=i;j<m-i;j++){
                    p[d++]=a[i][j];
                }
                for(int j=i+1;j<n-i;j++){
                    p[d++]=a[j][m-i-1];
                }
                for(int j=m-i-2;j>=i;j--){
                    p[d++]=a[n-i-1][j];
                }
                for(int j=n-2-i;j>i;j--){
                    p[d++]=a[j][i];
                }
            }
        }
        cout<<p[k-1]<<endl;
    }
}