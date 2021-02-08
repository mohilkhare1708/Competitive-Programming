//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mii map <int, int>
#define mll map <ll, ll>
#define pii pair <int, int>
#define pll pair <ll, ll>
#define vi vector <int>
#define vd vector <double>
#define vll vector <ll>
#define fi first
#define se second
#define si set <int>
#define sll set <ll>
#define spii set <pii>
#define vs vector <string>
#define vpii vector <pair <int,int> >
#define vpll vector <pair <long long,long long> >
#define vvi vector <vector <int> >
#define vvpii vector <vector <pii > >
#define mp make_pair
#define vvll vector <vll>
#define vsi vector <si>
#define forn(i, n) for (int i = 0; i < (n); i++)
#define rep(i, n) for (int i = 0; i < (n); i++)
#define for1(i, n) for (int i = 1; i < (n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define MANX MAXN
#define double long double

const ll INFLL = 1e18;
const int MAXN = 1e6+100;
const ll INF = 1e9;
const ll mod1=1e9+7;
const ll mod2=2e9+11;
const double EPS = 1e-9;
ll aa[20][20];
ll pref[20];
// http://e-maxx-ru.1gb.ru/algo/linear_systems_gauss
//e-maxx gauss-jordan-elimination
int gauss (vector < vector<double> > a, vector<double> & ans) {
    int n = (int) a.size();
    int m = (int) a[0].size() - 1;

    vector<int> where (m, -1);
    for (int col=0, row=0; col<m && row<n; ++col) {
        int sel = row;
        for (int i=row; i<n; ++i)
            if (abs (a[i][col]) > abs (a[sel][col]))
                sel = i;
        if (abs (a[sel][col]) < EPS)
            continue;
        for (int i=col; i<=m; ++i)
            swap (a[sel][i], a[row][i]);
        where[col] = row;

        for (int i=0; i<n; ++i)
            if (i != row) {
                double c = a[i][col] / a[row][col];
                for (int j=col; j<=m; ++j)
                    a[i][j] -= a[row][j] * c;
            }
        ++row;
    }

    ans.assign (m, 0);
    for (int i=0; i<m; ++i)
        if (where[i] != -1)
            ans[i] = a[where[i]][m] / a[where[i]][i];
    for (int i=0; i<n; ++i) {
        double sum = 0;
        for (int j=0; j<m; ++j)
            sum += ans[j] * a[i][j];
        if (abs (sum - a[i][m]) > EPS)
            return 0;
    }

    for (int i=0; i<m; ++i)
        if (where[i] == -1)
            return INF;
    return 1;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifdef LOCAL
    freopen("a.in","r",stdin);
    #endif
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int cnt=0;
        for (int i=0;i<n;i++)
        {
            ll x=0;
            for (int j=0;j<n;j++)
                cin>>aa[i][j],x+=aa[i][j];
            if (x!=1||aa[i][i]!=1)
                cnt++;
            pref[i]=x;
        }
        vector <double> ans(cnt);
        vector <vector <double> > b(cnt+1,vector <double>(cnt+1));
        vector <vector <double> > p(n,vector <double>(n));
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++) {
                p[i][j] = (double) (aa[i][j]) / (double) (pref[i]);
            }
        }
        map <int,int> m;
        int cur=0;
        for (int i=0;i<n;i++)
        {
            if (pref[i]!=1||aa[i][i]!=1)
                m[i]=cur++;
            else
                m[i]=-1;
        }
        for (int i=0;i<n;i++)
        {
            if (m[i]==-1)
                continue;
            int x=m[i];
            for (int j=0;j<n;j++)
            {
                if (m[j]==-1)
                {
                    if (j==0)
                        b[x][cnt]=-p[i][j];
                } else
                {
                    if (i!=j)
                        b[x][m[j]]=p[i][j];
                    else
                        b[x][x]=p[i][j]-1;
                }
            }
        }
        gauss(b,ans);
        int ind=-1;
        double mx=-1;
        for (int i=0;i<cnt;i++)
        {
       //     cout<<i<<" "<<ans[i]<<'\n';
            if (ans[i]>mx)
                mx=ans[i],ind=i;
        }
        for (int i=0;i<n;i++)
        {
            if (m[i]==ind)
            {
                ind=i;
                break;
            }
        }
        cout<<ind<<'\n';
    }


    //n=1 ?
    //recursion - matrix exponential
    //linear algebra - just a joke
    //check ios_base, MAXN, mod1 before submit
    //if debug more than 15 minutes - write stress
    //compression
}