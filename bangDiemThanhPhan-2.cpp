#include<bits/stdc++.h>
using namespace std;

struct sinhVien{
    string msv,hoTen,lop;
    float diem1,diem2,diem3;
};

void nhap(struct sinhVien &p){
    cin>>p.msv;
    scanf("\n");
    getline(cin,p.hoTen);
    cin>>p.lop;
    cin>>p.diem1>>p.diem2>>p.diem3;
}

int main(){
    int n;
    cin>>n;
    struct sinhVien list[n];
    for(int i=0;i<n;i++){
        nhap(list[i]);
    }
    struct sinhVien tg;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(list[i].hoTen>list[j].hoTen){
                tg=list[i];
                list[i]=list[j];
                list[j]=tg;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<i+1<<" "<<list[i].msv<<" "<<list[i].hoTen<<" "<<list[i].lop<<" "<<fixed<<setprecision(1)<<list[i].diem1<<" "<<list[i].diem2<<" "<<list[i].diem3<<endl;
    }
}