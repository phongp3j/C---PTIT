#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long a,b,c,t;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        long long kq=pow(a%c,b);
        cout<<kq%c<<endl;
    }
}