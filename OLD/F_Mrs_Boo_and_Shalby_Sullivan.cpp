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

string x;
    cin >> x;

    for (size_t i = 0; i < x.size(); i++) {
        int digit = x[i] - '0';
        int id = 9 - digit;
        if (id < digit) {

            if (i == 0 && id == 0) {
                continue;
            }
            x[i] = id + '0';
        }
    }

    cout << x << endl;


return 0;
}