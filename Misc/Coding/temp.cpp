#include<bits/stdc++.h>
using namespace std;
#define v vector
#define ll long long int
#define pb push_back
ll cbits(ll n)
{
    return (ll)log2(n)+1;
}
ll fun(ll x, ll y, ll z)
{
    ll ans = (x & z) * (y & z);
    return ans;
}
int main()
{
    /*
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
*/
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, l=0, r;
        cin >> x >> y>>l>>r;
        if(x==0||y==0||r==0)
        {
            cout<<0<<endl;
            continue;
        }
            ll ans = x | y;
            if (ans >= l && ans <= r)
            {
                cout << ans << endl;
            }
            else
            {
                // v<ll> temp;
                ll maxw=fun(x,y,r);
                ll tp=r;
                ll n = 40;
                v<ll> R(n,0);
                v<ll> Ans(n,0);
                v<ll> Orand(n,0);
                v<ll> temp(n,0);
                for(ll i=0;i<n;i++)
                {
                    ll d1=((1<<i)&r);
                    if(d1>0)
                        R[i]=1;
                }
                ll xory = x | y;
                for(ll i = 0; i <= cbits(xory)-1; i++) { 
                    ll k = xory >> i; 
                    if (k & 1) 
                        Ans[i] = 1;
                    else
                        Ans[i] = 0;
                } 
                //for(auto a : Ans) cout << a << " "; cout << endl;
                ll orand = xory & r;
                for(ll i = 0; i <= cbits(orand)-1; i++) { 
                    ll k = orand >> i; 
                    if (k & 1) 
                        Orand[i] = 1;
                    else
                        Orand[i] = 0;
                }
                //for(auto a : Orand) cout << a << " "; cout << endl;
                for(ll i=0;i<n;i++)
                {
                    if(R[i]==1)
                    {
                        temp[i]=0;
                        for(ll j=0;j<i;j++)
                        {
                            temp[j]=Ans[j];
                        }
                        for(ll j=i+1;j<n;j++)
                        {
                            temp[j]=Orand[j];
                        }
                        ans = 0;
                        for (ll j = 0; j < n; j++)
                        {	if (temp[j])
                                ans += 1 << j;
                        }
                        //cout << ans << " " << fun(x, y, ans) << endl;
                        if(ans <= r) {
                            if(fun(x, y, ans) > maxw && ans < r) {
                                tp = ans;
                                maxw = fun(x, y, ans);
                            }
                            if(fun(x, y, ans) >= maxw && ans < tp) {
                                tp = ans;
                                maxw = fun(x, y, ans);
                            }
                        }
                    }
                }
                cout<<tp<<endl;
            }


    }
}