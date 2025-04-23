#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define isEven(n) (n % 2 ==0)


bool isPalindrome(int x) {
    string s = to_string(x);
    int l = 0;
    int r = s.length()-1;

    while(l <= r){
        if(s[l] != s[r]){
            return false;
        }

        l++;
        r--;
    }
    

    return true;
    
}

int main() {

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

cout<<isPalindrome(121);









return 0;
}