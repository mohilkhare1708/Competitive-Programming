#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll n, summ = 0; cin >> n;
        ll a[n+1]; 
        for(ll i = 1; i <= n; i++) {
            cin >> a[i];
            //sum += a[i];
        }
        sort(a+1, a+n+1);
        ll ans = 1, in = 1;
        ll sum[n+1];
        sum[0] = 1;
        sum[1] = a[1]+1;
        for(ll i = 2; i <= n; i++)
            sum[i] = (sum[i-1] + a[i]); 
        for(ll i = 1; i <= n; i++) cout << a[i] << " "; cout << endl;
        for(ll i = 0; i <= n; i++) cout << sum[i] << " "; cout << endl;
        for(ll i = 1; i <= n; i++) {
            if(in >= a[i]) {
                ans++;
                in++;
                cout << "\t" << a[i] << " in" << endl;
            }
            else {
                cout << "aah" << endl;
                ll x = i;
                while(a[x] > sum[x-1] && x < n+1)
                    x++;
                cout << x << endl;
                if(x == n+1)
                    break;
                else
                    in = sum[x];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
