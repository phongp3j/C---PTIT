#include <iostream>
#include <math.h>
using namespace std;

//hàm kiểm tra số nguyên tố
int SNT(int a)
{
    if (a < 2)
        return 0;
    else
    {
        for (int i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
                return 0;
        }
    }
    return 1;
}

int main(){
    int a,b;
    cin>>a>>b;
    if(a<b){
        for(int i=a;i<=b;i++){
        if(SNT(i)==1)
        {
            cout<<i<<" ";

        }
    }
    }
    if(a>b){
        for(int i=b;i<=a;i++){
        if(SNT(i)==1)
        {
            cout<<i<<" ";

        }
    }
    }
}