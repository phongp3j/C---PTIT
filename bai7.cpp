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
    int a,b,t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int tg;
        for(int i=a;i<=b;i++){
            if(SNT(i)==1){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}