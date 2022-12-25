#include <iostream>
using namespace std;
bool check(long long mang[],int a,int b){
    for(int i=a;i<b;i++){
        for(int j=i+1;j<b;j++){
            if(mang[i]==mang[j]){
                return false;
            }
        }
    }
    return true;
}

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
        long long kq=-1;
        for(long long i=0;i<n;i++){
            for(long long j=i+1;j<n;j++){
                if(a[i]==a[j] && check(a,i,j)){
                    kq=a[i];
                    break;
                }
            }
            if(kq!=-1){
                break;
            }
        }
        cout<<kq<<endl;
    }
}