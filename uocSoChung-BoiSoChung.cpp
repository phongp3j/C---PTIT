#include <iostream>
using namespace std;

//sử dụng giải thuật euclid: nếu a%b=0 thì ước chung lớn nhất là b còn số dư khác 0 thì thì ước chung lớn nhất trả về ước chung lớn nhất của b và số dư của a%b

long long GCD(long long a,long long b){
    return a%b==0?b:GCD(b,a%b);
}
long long LCM(long long a,long long b){
    return a*b/GCD(a,b);
}

int main()
{
    int t;
    cin>>t;
    int a,b;
    while(t--)
    {
        cin>>a>>b;
        cout<<LCM(a,b)<<" "<<GCD(a,b)<<endl;
    }
}