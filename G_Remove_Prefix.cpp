#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define isEven(n) (n % 2 ==0)
int arr[100001];
vector<int> v;



bool nice(queue<int> q){
    set<int> distinctNumbers;
    while (!q.empty()) {
        int num = q.front();
        q.pop();
        distinctNumbers.insert(num);
    }
    return distinctNumbers.size() == q.size();
}


int main() {
KemOn09();

int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        set<int> seen;
        int remove_count = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (seen.find(a[i]) != seen.end()) {
                remove_count = i + 1;
                break;
            }
            seen.insert(a[i]);
        }

        cout << remove_count << endl;
    }


return 0;
}
