#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int n;
cin>>n;
string s;
cin>>s;
transform(all(s),s.begin(),::tolower);
set<char>st;    
for(int i=0;i<n;i++){
    st.insert(s[i]);
}
if(st.size()==26){
    cout<<"YES";
}
else{
    cout<<"NO";
}




return 0;
}