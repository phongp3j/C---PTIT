#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int check=0;
        int min=a[0],min2;
        for(int i=1;i<n;i++){
            if(a[i]>min){
                min2=a[i];
                check++;
                break;
            }
        }
        if(check==0) cout<<-1<<endl;
        else{
            cout<<min<<" "<<min2<<endl;
        }
    }
}