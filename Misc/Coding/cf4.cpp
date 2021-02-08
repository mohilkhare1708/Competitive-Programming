//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define sll stack<long long int>
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

//namespaces
using namespace std;

//program specific shorts (if any)
const int sz = 1e5; 

vector<int> tree[sz]; 
bool vis[sz]; 
vector<int> path[sz]; 
void addEdge(int a, int b) { 
    tree[a].push_back(b); 
    tree[b].push_back(a); 
} 
void bfs(int node) { 
    queue<pair<int, int> > qu; 
    qu.push({ node, -1 }); 
    vis[node] = true; 
  
    while (!qu.empty()) { 
        pair<int, int> p = qu.front(); 
        qu.pop(); 
        vis[p.first] = true; 
        for (int child : tree[p.first]) { 
            if (!vis[child]) { 
                qu.push({ child, p.first }); 
                path[child] = path[p.first]; 
                path[child].push_back(p.first); 
            } 
        } 
    } 
} 

vector<int> displayPath(int node) { 
    vector<int> ans = path[node]; 
    for (int k : ans) { 
        cout << k << " "; 
    } 
    ans.pb(node);
    return ans; 
} 

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll u = 0; u < t; u++) {
        ll n, q; cin >> n >> q;
        for(ll i = 0; i < n-1; i++) {
            ll a, b; cin >> a >> b;
            addEdge(a, b);
        }
        bfs(1);
        for(ll i = 0; i < q; i++) {
            ll mini = 999999999;
            ll k; cin >> k; ll a[k]; for(ll j = 0; i < k; j++) cin >> a[j], mini = min(mini, a[j]);
            if(mini == 1)
                cout << "1" << endl;
            else if(k == 1) 
                cout << a[0] << endl;
        }
    }
    return 0;
}