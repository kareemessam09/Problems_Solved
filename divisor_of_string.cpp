#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back


string gcdOfStrings(string str1, string str2) {

   int l1 = str1.length(),l2 = str2.length();

   if (str1+str2 != str2+str1)
   {
     return "";
   }else
   {
    return str1.substr(0,gcd(l1,l2));
   }
   

    }

int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);


cout<<gcdOfStrings("LEET","AB");


return 0;
}