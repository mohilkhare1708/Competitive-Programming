#include<bits/stdc++.h>
using namespace std;
#define v vector
#define ll long  int
#define pb push_back
#define um unordered_map
class op {
public:
    ll i1, i2, i3;
};
int main()
{
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
*/

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n , k ;
        cin >> n >> k;
        v<ll> A(n + 1);
        A[0] = 0;
        v<ll> index(n + 1, 0);
        ll c = 0;
        for (ll i = 1; i <= n; i++)
        {
            cin >> A[i];
            index[A[i]] = i;
            if (A[i] != i)
                c++;
        }
        if (c == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if (c < 3)
        {
            cout << -1 << endl;
            continue;
        }
        v<op> ans;
        bool flag = true;
        for (ll i = 1,x=0; i <= n&&x<k; i++)
        {
            if (A[i] != i)
            {
                ll a_i, a_e, b_i, b_e, c_i, c_e;

                a_i = i;
                a_e = A[i];

                b_i = index[i];
                b_e = i;

                c_i = A[i];
                c_e = A[A[i]];

                if (c_e == a_i)
                {
                    for (ll j = 1; j <= n; j++)
                    {
                        if (A[j] != j && c_i != j && c_e != j && j != b_i && j != a_i&&(j==A[A[j]]))
                        {
                            c_i = j;
                            c_e = A[j];
                            break;
                        }
                    }
                }
                cout << a_i << " " << b_i << " " << c_i << endl;
                if (c_e == a_i)
                {
                    continue;
                }
                ans.pb({a_i, c_i, b_i});
                A[a_i] = b_e;
                A[c_i] = a_e;
                A[b_i] = c_e;

                index[b_e] = a_i;
                index[a_e] = c_i;
                index[c_e] = b_i;
                cout << index[a_e] << " " << index[b_e] << " " << index[c_e] << endl;
                x++;
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            if (i != A[i])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
        {
            cout << -1 << endl;
            continue;
        }
        else if (ans.size() <= k)
        {
            cout << ans.size() << endl;
            for (ll i = 0; i < ans.size(); i++)
            {
                cout << ans[i].i1 << " " << ans[i].i2 << " " << ans[i].i3 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}