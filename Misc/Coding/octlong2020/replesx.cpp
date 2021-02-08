/*
Author : Mohil Khare
Created On: 02 October 2020, 20:27
*/

#include <bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// program specific shorts (if any)
const ll mod = 1000000007;

using namespace std;

int main()
{
    fastIO;
    ll t;
    cin >> t;
    for (ll qq = 0; qq < t; qq++)
    {
        ll n, x, p, k, ans = 0;
        cin >> n >> x >> p >> k;
        vll a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        ll P = a[p - 1], K = a[k - 1];
        if (x == P)
            cout << 0 << endl;
        else if (K >= P && P >= x)
            cout << abs(p - 1 - (upper_bound(a.begin(), a.end(), x) - a.begin()) + 1) << endl;
        else if (x >= P && P >= K)
            cout << abs(p - 1 - (lower_bound(a.begin(), a.end(), x) - a.begin())) << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}