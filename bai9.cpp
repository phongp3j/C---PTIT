#include <iostream>
#include <math.h>
using namespace std;

//hàm kiểm tra số nguyên tố
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
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=2;i<=n;i++)
        {
            int dem=0;
            if(SNT(i)==1 && n%i==0){
                while(n%i==0)
                {
                    n=n/i;
                    dem++;
                }
                cout<<i<<" "<<dem<<" ";
            }
        }
        cout<<endl;
    }
}