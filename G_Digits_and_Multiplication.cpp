#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

int num_digits(long long x) {
    return to_string(x).length();
}

int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);

long long N;
    cin >> N;

    int min_digits = INT_MAX;

    for (long long A = 1; A * A <= N; ++A) {
        if (N % A == 0) {
            long long B = N / A;
            int digits_A = num_digits(A);
            int digits_B = num_digits(B);
            min_digits = min(min_digits, max(digits_A, digits_B));
        }
    }

    cout << min_digits << "\n";




return 0;
}