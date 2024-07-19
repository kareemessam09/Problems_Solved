#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define isEven(n) (n % 2 ==0)
int arr[100001];
vector<int> v;

int main() {
KemOn09();

string s;
    cin >> s;

    string target = "heidi";
    int j = 0;

    for (char c : s) {
        if (c == target[j]) {
            j++;
        }
        if (j == target.size()) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    
return 0;
}