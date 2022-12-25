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
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int dem=0;
        for(int i=l;i<=r;i++){
            if(SNT(i)==1){
                dem++;
            }
        }
        cout<<dem<<endl;
    }
}