#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        long long min=a[0]+a[1];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs(0-min)>abs(0-(a[i]+a[j]))) min=a[i]+a[j];
            }
        }
        cout<<min<<endl;
    }
}