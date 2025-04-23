#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back


string reverseWords(string s) {
        
    stack<string> st;
    string res = "";
    string ss = "";

    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (!ss.empty()) {
                st.push(ss);
                ss = "";
            }
        } else {
            ss += s[i];
        }
    }

    if (!ss.empty()) {
        st.push(ss);
    }

    while (!st.empty()) {
        res += st.top();
        st.pop();
        if (!st.empty()) {
            res += " ";
        }
    }

    return res;
}


int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);
cout<<"res :  ";
cout<<reverseWords("kk saa asda aa");

return 0;
}