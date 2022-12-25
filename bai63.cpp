#include <iostream>
using namespace std;
int main(){
    unsigned long long n,t;
    cin>>t;
    while(t>0 && t<=10){
        cin>>n;
        unsigned long long tong = n*(n+1)/2;
        cout<<tong<<endl;
        t--;
    }
}