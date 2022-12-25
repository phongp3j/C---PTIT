#include <bits/stdc++.h>
using namespace std;

string get_string_sum(string str1, string str2) {
   if (str1.size() < str2.size())
      swap(str1, str2);
   int len1 = str1.size();
   int len2 = str2.size();
   string ans = "";
   int carry = 0;
   for (int i = 0; i < len2; i++) {
      int ds = ((str1[len1 - 1 - i] - '0') + (str2[len2 - 1 - i] - '0') + carry) % 10;
      carry = ((str1[len1 - 1 - i] - '0') + (str2[len2 - 1 - i] - '0') + carry) / 10;
      ans = char(ds + '0') + ans;
   }
   for (int i = len2; i < len1; i++) {
      int ds = (str1[len1 - 1 - i] - '0' + carry) % 10;
      carry = (str1[len1 - 1 - i] - '0' + carry) / 10;
      ans = char(ds + '0') + ans;
   }
   if (carry)
      ans = char(carry + '0') + ans;
   return ans;
}
bool sumStrCheckHelper(string str, int beg, int len1, int len2) {
   string sub1 = str.substr(beg, len1);
   string sub2 = str.substr(beg + len1, len2);
   string sum = get_string_sum(sub1, sub2);
   int sum_len = sum.size();
   if (sum_len > str.size() - len1 - len2 - beg)
      return false;
   if (sum == str.substr(beg + len1 + len2, sum_len)) {
      if (beg + len1 + len2 + sum_len == str.size())
         return true;
      return sumStrCheckHelper(str, beg + len1, len2, sum_len);
   }
   return false;
}
bool isSumStr(string str) {
   int n = str.size();
   for (int i = 1; i < n; i++)
      for (int j = 1; i + j < n; j++)
      if (sumStrCheckHelper(str, 0, i, j))
         return true;
   return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin>>a;
        if(isSumStr(a)) cout<<"Yes"<<endl;
        else cout<<"No\n";
    }
}