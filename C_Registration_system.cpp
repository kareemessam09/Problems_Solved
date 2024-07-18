#include<bits/stdc++.h>
#include<map>

using namespace std;


#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define isEven(n) (n % 2 ==0)

int arr[100001];
vector<int> v;

int main() {
KemOn09();

int n;
cin >> n;
string s;
int c = 1;
unordered_map<string,int> mp;
while (n--)
{
   cin>>s;
    mp[s]++;
   if (mp[s] > 1)
   {
    cout << s + to_string(mp[s] - 1) << endl;
    c++;
   }else{
      cout<<"OK"<<endl;
   }

   
}




return 0;
}