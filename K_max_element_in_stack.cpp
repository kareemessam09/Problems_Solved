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

stack<long long> stack;
stack<long long> maxstack;
vector<long long> results;

int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int type;
        cin >> type;
        
        if (type == 1) {
            long long X;
            cin >> X;
            stack.push(X);
            if (maxstack.empty() || X >= maxstack.top()) {
                maxstack.push(X);
            } else {
                max_stack.push(maxstack.top());
            }
        } else if (type == 2) {
            stack.pop();
            maxstack.pop();
        }
        
        results.push_back(maxstack.top());
    }
    
    for (auto& result : results) {
        cout << result << endl;
    }
    



return 0;
}