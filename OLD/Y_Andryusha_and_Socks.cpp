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
vector<int>v(n);
set<int>st;
int ans=0;

for(int i=0;i<2*n;i++){
    int x;
    cin>>x;
    if(st.count(x)){
        st.erase(x);
    }
    else{
        st.insert(x);
        ans=max(ans,(int)st.size());
    }
}
cout<<ans;



return 0;
}