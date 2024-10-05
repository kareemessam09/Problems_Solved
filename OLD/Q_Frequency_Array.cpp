#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int n,k; 
cin >> n>>k;
int arr[n];
int freq[k+1] = {0};  
for(int i = 0; i < n; i++) {

    cin >> arr[i];
    freq[arr[i]]++;
}
for(int i = 1; i <= k; i++) {
    cout << freq[i] << endl;
}



return 0;
}