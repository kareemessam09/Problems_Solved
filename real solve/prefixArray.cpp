#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define isEven(n) (n % 2 ==0)
#define v vector

v<int> prefixSumArray(v<int>& pref){
   v<int> res(pref.size());

   for(int i = 0; i < pref.size() ; i ++){
    res[i] = res[i - 1] + pref[i]; 
   }

   return res;

}


int main() {

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

vector<int> test = {7,1,5,3,6,4};

v<int> ans = prefixSumArray(test);

for(auto i : ans){
    cout<<i<<" ";
}

int a,b;
cout<<"welcome \n";
for(int i = 0 ; i<5 ; i++){
    cout<<"enter range: from to     ";
    cin>>a>>b;
    cout<<"answer: \n";
    cout<<ans[b] - ans[a-1]<<"\n"; 
}


return 0;
}



