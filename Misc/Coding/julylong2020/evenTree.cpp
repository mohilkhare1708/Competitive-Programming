//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;










// IGNORE ABOVE PART! :)

struct node {
    int val, root;
    node() {
        val = 1;
        root = INT_MIN;
    }
};

int main() {
    fastIO;
    int n, m; cin >> n >> m;
    int ans = 0;
    vector<node> nd = vector<node>(n); // to store the nodes and their respective roots
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        nd[x-1].root = y-1;
    }
    // leaf to root traversal
    for(int i = n-1; i >= 0; i--) {
        if(nd[i].root > INT_MIN) // more than initialized val
            nd[nd[i].root].val += nd[i].val; 
    }
    for(auto x : nd) cout << x.val << " "; cout << endl;
    for(int i = 0; i < n; i++) {
        if(nd[i].root > INT_MIN && !(nd[i].val & 1))// nd[i].val % 2 == 0
            ans++;
    }
    cout << ans;
    return 0;
}