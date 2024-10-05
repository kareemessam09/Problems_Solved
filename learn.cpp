#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);

queue<int>qu; //FIFO
qu.push(10);
qu.pop();
qu.empty();
qu.front();
qu.back();

stack<int>st; //LIFO
st.push(10);
st.pop();
st.empty();
st.top();
st.size();

deque<int>deq; //Double ended queue
deq.push_back(10);
deq.push_front(20);
deq.pop_back();
deq.pop_front();
deq.front();
deq.back();
deq.erase(deq.begin() + 1);
deq.insert(deq.begin() + 1, 10);

priority_queue<int>pq; //Max heap by default
priority_queue<int, vector<int>, greater<int>>pqm; //Min heap
pq.push(10);
pq.pop();
pq.top();
pq.size();
pq.empty();

unordered_set<int>uset; //Unsorted set
uset.insert(10);
uset.erase(10);
uset.find(10);
uset.count(10);
uset.size();
uset.empty();

unordered_map<int, int>umap; //Unsorted map
umap[10] = 20;
umap.erase(10);
umap.find(10);
umap.count(10);
umap.size();
umap.empty();

set<int>se; //Sorted set
se.insert(10);
se.erase(10);
se.find(10);
se.count(10);
se.size();
se.empty();

map<int, int>mp; //Sorted map
mp.insert({10, 20});
mp[10] = 20;
mp.erase(10);
mp.find(10);
mp.count(10);
mp.size();
mp.empty();

vector<int>vec; //Dynamic array
vec.push_back(10);
vec.pop_back();
vec.size();
vec.empty();
vec.clear();
vec.insert(vec.begin() + 1, 10);
vec.erase(vec.begin() + 1);
vec.resize(10);
vec.reserve(10);
vec.shrink_to_fit();
vec.front();
vec.back();
vec[0];
vec.at(0);

array<int, 10>arr; //Fixed size array
arr.fill(10);
arr.size();
arr.front();
arr.back();
arr[0];
arr.at(0);

list<int>li; //Double linked list
li.push_back(10);
li.push_front(20);
li.pop_back();
li.pop_front();
li.front();
li.back();
li.erase(li.begin());
li.insert(li.begin(), 10);

multiset<int>mset; //Sorted multiset <allows dublicates>
mset.insert(10);
mset.erase(10);
mset.find(10);
mset.count(10);
mset.size();
mset.empty();

multimap<int, int>mmp; //Sorted multimap <multi values for same key>
mmp.insert({10, 20});
mmp.erase(10);
mmp.find(10);
mmp.count(10);
mmp.size();
mmp.empty();

bitset<10>bt; //manage flags or on/off states
bt.set(0);
bt.reset(0);
bt.flip(0);
bt.test(0);
bt.count();
bt.any();
bt.none();
bt.size();

pair<int, int>pr; //pair of two values
pr.first = 10;
pr.second = 20;

tuple<int, int, int>tp; //tuple of three values
tp = make_tuple(10, 20, 30);
get<0>(tp);
get<1>(tp);
get<2>(tp);





return 0;
}