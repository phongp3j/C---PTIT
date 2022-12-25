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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int check=0,dem=0,dem2=0;
        if(SNT(n)==1) check=0;
        else{
            for(int i=2;i<=n;i++){
                int dem1=0;
                if(SNT(i) && n%i==0){
                    while(n%i==0 && n>1){
                        dem1++;
                        dem2++;
                        n=n/i;
                    }
                }
                if(dem1==1) dem++;
            }
            if(dem==3 && dem2==3) check++;
            //dem2 là kiểm tra chỉ có duy nhất 3 ước
        }
        cout<<check<<endl;
    }
}