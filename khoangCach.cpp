#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int t;
    cin>>t;
    double a,b,c,d;
    while(t--){
        cin>>a>>b>>c>>d;
        double khoangCach = sqrt(pow(abs(c-a),2)+pow(abs(d-b),2));
        cout<<fixed<<setprecision(4)<<khoangCach<<endl;
    }
}