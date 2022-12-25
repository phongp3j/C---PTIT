#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int d=0;
        for(int i=0;i<b;i++){
            if((a*i)%b==1) {
                cout<<i<<endl;
                d++;
                break;
            }
        }
        if(d==0){
            cout<<"-1"<<endl;
        }
    }
}