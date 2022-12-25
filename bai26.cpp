#include <iostream>
using namespace std;

int main(){
    int a[100000],n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int max=a[0];
        for(int i=1;i<n;i++)
        {
            if(max<a[i]){
                max=a[i];
            }
        }
        cout<<max<<endl;
    }
}