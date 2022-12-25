#include <iostream>
#include <math.h>
using namespace std;

int soCanBang(int n){
    int dem=0,demle=0;
    while(n!=0){
        dem++;
        if((n%10)%2==1) demle++;
        n/=10;
    }
    if(demle==dem-demle) return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
    int dem=0;
    for(int i=pow(10,n-1);i<pow(10,n);i++){
        if(soCanBang(i)){
            cout<<i<<" ";
            dem++;
        }
        if(dem%10==0) cout<<endl;
    }
    
}