#include <iostream>
#include <math.h>
using namespace std;

int ngTo(int n){
    if(n<2) return 0;
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) {
                return 0;
                break;
            }
        }
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        for(int i=2;i*i<=a;i++)
        {
            if(ngTo(i)==1 && i*i<=a) {
                cout<<i*i<<" ";
            }
        }
        cout<<endl;
    }
}