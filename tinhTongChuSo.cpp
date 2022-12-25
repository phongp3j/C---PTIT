#include <iostream>
using namespace std;

long long sum(long long a){
    long long tong = 0;
    while(a!=0){
        tong = tong + a%10;
        a=a/10;
    }
    if(tong>=10){
        return sum(tong);
    }
    return tong;
}
int main(){
    long long m,t;
    cin>>t;
    while(t--){
        cin>>m;
        long long a=sum(m);
        cout<<a<<endl;
    }
}