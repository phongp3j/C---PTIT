#include<bits/stdc++.h>
using namespace std;

int thuannghich(string s){
    for(int i = 0 ; i <= s.size()/2 ; i++){
        if(s[i] != s[s.size()-1-i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    ifstream ip("VANBAN.in");
    string s;
    map<string,int> mp;
    while(ip>>s) {
        
        mp[s]++;
    }
    int max1=0;
    string res = "";
    int max2=0;
    for(auto x : mp){
        if(x.first.size()>max1 && thuannghich(x.first)){
            max1 = x.first.size();
            res= x.first;
            max2=x.second;
        }
    }
    cout<<res<<" "<<max2;
}


int soNguyenTo(int soA)
{
    if (soA < 2)    
        return 0;

    for (int i = 2; i <= sqrt((float)soA); i ++)
    {
        if (soA%i==0)
        {
            return 0;
        }
    }
    return 1;
}

#include<bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define FORD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define endl '\n'
int main(){
	int n;
	cin >> n;
	int a[n];
	int max1 = 0, max2 = 0, max3 = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i]>=max1){
			max3 = max2;
			max2 = max1;
			max1 = a[i];
		}
		else if(a[i] >= max2){
			max3 = max2;
			max2 = a[i];
		}
		else if(a[i] >= max3){
			max3 = a[i];
		}
	}
	cout << max1 + max2 + max3;
}