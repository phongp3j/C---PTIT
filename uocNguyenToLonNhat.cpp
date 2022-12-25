#include <iostream>
#include <math.h>
using namespace std;

int SNT(int a){
    if(a<2) return 0;
    else{
        for(int i=2;i<=sqrt(a);i++)
        {
            if(a%i==0) return 0;
        }
    }
    return 1;
}

int main(){
    long long a,t;
    cin>>t;
    while(t--){
        cin>>a;
        if(SNT(a)==1){
            cout<<a<<endl;
        }
        else{
            long long dem=0,b;
            for(int i=2 ; i<=sqrt(a);i++){
                if(a%i==0){

                    if(SNT(i)==1){
                        b=i;
                    }
                    if(SNT(a/i)==1){
                        cout<<a/i<<endl;
                        
                        dem=1;
                        break;
                    }
                }
            }
            if(dem==0) cout<<b<<endl;
        }
    }
}