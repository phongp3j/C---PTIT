#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238

struct diem{
    double x1,y1,x2,y2,x3,y3;
};

void nhap(struct diem &p){
    cin>>p.x1>>p.y1>>p.x2>>p.y2>>p.x3>>p.y3;
}

void ketqua(struct diem &p){
    double a,b,c,S,R,output;
    a=sqrt((p.x2-p.x1)*(p.x2-p.x1) + (p.y2-p.y1)*(p.y2-p.y1));
    b=sqrt((p.x3-p.x2)*(p.x3-p.x2) + (p.y3-p.y2)*(p.y3-p.y2));
    c=sqrt((p.x3-p.x1)*(p.x3-p.x1) + (p.y3-p.y1)*(p.y3-p.y1));
    if(a<b+c && b<a+c && c<a+b){
        S = 0.25*sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
        R = (a*b*c)*(1.0/(4.0*S));
        output = PI*R*R;
        cout<<fixed<<setprecision(3)<<output;
    }
    else{
        cout<<"INVALID";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        struct diem p;
        nhap(p);
        ketqua(p);
        cout<<endl;
    }
}