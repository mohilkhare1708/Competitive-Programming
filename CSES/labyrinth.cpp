/*
Author : Mohil Khare
Created On: 26 October 2020, 23:22
*/

#include <bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define here std::cout << "here" << std::endl;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// program specific shorts (if any)
const ll mod = 1000000007;

using namespace std;

ll n, m, d[1001][1001];
char a[1001][1001], p[1001][1001];
// bool vis[1001][1001];

ll dx[4] = {-1, 0, 1, 0};
ll dy[4] = {0, 1, 0, -1};
char dir[4] = {'U', 'R', 'D', 'L'};

int main() {
    fastIO;
    cin >> n >> m;
    pair<ll, ll> start, end;
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cin >> a[i][j];
            p[i][j] = '0';
            if(a[i][j] == 'A') {
                start = mp(i, j);
                a[i][j] = '.';
            }
            if(a[i][j] == 'B') {
                end = mp(i, j); 
                a[i][j] = '.';
            }
            //p[i] = string(n, 0);
        }
    }
    queue<pair<ll, ll>> keeper;
    keeper.push(start);
    while(!keeper.empty()) {
        pair<ll, ll> curr = keeper.front();
        keeper.pop();
        for(ll i = 0; i < 4; i++) {
            ll newI = curr.first + dx[i], newJ = curr.second + dy[i];
            if(newI < 0 || newI >= n || newJ < 0 || newJ >= m || a[newI][newJ] != '.') continue;
            keeper.push(mp(newI, newJ));
            a[newI][newJ] = '#';
            d[newI][newJ] = i;
            p[newI][newJ] = dir[i];
        }
    }
    // for(ll i = 0; i < n; i++) {
    //     for(ll j = 0; j < m; j++) 
    //         cout << p[i][j] << " ";
    //     cout << endl;
    // }
    if(p[end.first][end.second] != '0') {
        cout << "YES" << endl;
        string ans = "";
        while(start.first ^ end.first || start.second ^ end.second) {
            ans += p[end.first][end.second];
            ll keep = d[end.first][end.second] ^ 2;
            end.first += dx[keep];
            end.second += dy[keep];
        }
        reverse(ans.begin(), ans.end());
        cout << ans.length() << endl << ans;
    }
    else cout << "NO";
    return 0;
}