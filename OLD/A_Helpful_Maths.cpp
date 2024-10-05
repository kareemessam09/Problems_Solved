#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();

string s;
cin >> s;
vector<int> arr(s.size());

for(int i = 0; i < s.size(); i++) {
    if(s[i] != '+') {
        arr[i] = s[i] - '0';
    }
}

sort(arr.begin(), arr.end());

for(int i=0;i<arr.size();i++ ) {
    if (arr[i] != 0)
    {
        if (i == s.size()-1)
        {
            cout << arr[i];
        }else{
            cout << arr[i] << '+';
         }
        
    }

}





return 0;
}