#include <iostream>
using namespace std;

long long giaiThua(long long n){
    long long tich=1;
    for (long long i = 1; i <=n; i++)
    {
        tich=tich*i;
    }
    return tich;
}
int main(){
    int n;
    cin>>n;
    long long tong=0;
    for(int i=1;i<=n;i++){
        tong= tong+giaiThua(i);
    }
    cout<<tong;
}