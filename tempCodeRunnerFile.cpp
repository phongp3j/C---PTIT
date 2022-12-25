#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s1, s2;
		int check = 0;
		cin >> s1 >> s2;
		for(int i = 0 ;i <s1.size() ; i++){
			if(s1[i] >='0' && s1[i] <='9'){
				continue;
			}
			else {
				check++;
			}
		}
		string pass = "";
		for (int i = 0; i < s2.length(); i++)
		{
			if ((s2[i] >= 'A' && s2[i] <= 'J') || (s2[i] >= 'K' && s2[i] <= 'T') || (s2[i] >= '0' &&  s2[i] <= '9'))
			{
				if (s2[i] >= 'A' && s2[i] <= 'J')
				{
					pass = pass + to_string(s2[i] - 65);
				}
				if (s2[i] >= 'K' && s2[i] <= 'T')
				{
					pass = pass + to_string(s2[i] - 75);
				}
			}
			else {
				check++;
			}
		}
		if(stoi(s1) == stoi(pass) && s1.length() >= 4 && s1.length() <= 6 && check == 0){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}