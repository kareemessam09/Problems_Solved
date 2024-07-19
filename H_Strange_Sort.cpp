#include<bits/stdc++.h>
#include<map>

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

int n;
cin>>n;
vector<int> v(n);
unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        freq[v[i]]++;
    }

    sort(v.begin(), v.end(), [&](int a, int b) {
        if (freq[a] == freq[b]) {
            return a > b;
        }
        return freq[a] < freq[b];
    });

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }



return 0;
}

/*
int n;
cin >> n;
int b;
for (int i = 0; i < n; i++)
{
    cin>>b;
    v.push_back(b);
}
sort(all(v));

vector<int> vv;
for (int i = 0; i < n; i++)
{
    int c = 0;
    for (int j = 0; j < n; j++)
    {
        if (v[i] == v[j])
        {
            c++;
        }
    }
    vv.push_back(c);
}


vector<pair<int, int>> sorted;
for (int i = 0; i < n; i++) {
    sorted.push_back({vv[i], v[i]});
}

sort(sorted.begin(), sorted.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == b.first) {
        return a.second > b.second;
    }
    return a.first < b.first;
});

for (const auto& p : sorted) {
    cout << p.second << " ";
}







*/