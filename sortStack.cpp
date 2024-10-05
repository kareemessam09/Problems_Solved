#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define isEven(n) (n % 2 ==0)

int main() {

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

int n,t;
cin >> n;

stack<int> st;
int arr[n];
int res[n];
for (size_t i = 0; i < n; i++)
{
    cin>>arr[i];
}


for (size_t i = 0; i < n; i++)
{
    
    while (!st.empty() && st.top() >= arr[i])
    {
        st.pop();
    }
    if (!st.empty())
    {
        res[i] = st.top();
    }
    else
    {
        res[i] = -1;
    }
    
    st.push(arr[i]);
    
}

for (size_t i = 0; i < n; i++)
{
    cout<<res[i]<<" ";
}








return 0;
}