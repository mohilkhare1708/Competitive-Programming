#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    for(ll X = 0; X < t; X++) {
        ll n;
        cin >> n;
        ll a[n];
        cout << "Case #" << X+1 << ": "; 
        for(int i = 0; i < n; i++) cin >> a[i];
        multiset<ll> st;
        ll hIndex = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] > hIndex) {
                hIndex++;
                st.insert(a[i]);
            }
            while(*st.begin() < hIndex) {
                hIndex--;
                st.erase(st.begin());
            }
            cout << hIndex << " ";
        }
        cout << endl;
    }
    return 0;
}