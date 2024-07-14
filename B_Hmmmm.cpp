#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define isEven(n) (n % 2 ==0)
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> orderedSet;
void Erase(orderedSet &s, int val){
    int rank = s.order_of_key(val);
    auto it = s.find_by_order(rank);
    s.erase(it);
}
int arr[100001];
vector<int> v;

int main() {
KemOn09();

int n;
cin >> n;
ll a,b;
cin>>a>>b;
ll z;
ll res = 0;
while (n--)
{
    cin>>z;
    if(z >= a && z <= b){
        res+=z;
    }
}

cout<<res;


return 0;
}