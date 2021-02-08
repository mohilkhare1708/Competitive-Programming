#include<bits/stdc++.h>
#include<cstdint>
using namespace std;
#define ll long long int    
#define MOD 1000000007
/*void hk()
{
    #ifndef ONLINE_JUDGE
        freopen("inp.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
}*/
ll power(ll x, ll y)  
{  
    ll res = 1;   
    x = x % MOD; 
    if (x == 0) return 0; 
    while (y > 0)  
    {    
        if (y & 1)  
            res = (res*x) % MOD;   
        y = y>>1;  
        x = (x*x) % MOD;  
    }  
    return res;  
}
ll mulmod(ll a, ll b) { 
    ll res = 0; 
    a = a % MOD; 
    while (b > 0) { 
        if (b % 2 == 1) 
            res = (res + a) % MOD; 
        a = (a * 2) % MOD; 
        b /= 2; 
    } 
    return res % MOD; 
} 
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll a,b,c,d,e,f,g,N,n,M,m,i,j,ans=0;
        cin>>N>>M;
        m=max(N,M);
        a=min(N,M);
        b=power(a,2);
        c=power(a,3);
        d=power(a,4);
        e=power(a,5);
        f=power(a,6);
        ll p1 = ((-4*f%MOD+MOD)+6*e%MOD*m%MOD+(-18*e%MOD+MOD)+30*d%MOD*m%MOD+(-25*d%MOD+60*c)%MOD*m%MOD+60*b%MOD*m%MOD+29*b%MOD+24*a%MOD*m%MOD+18*a%MOD);
        cout << (-4*f%MOD)+MOD << endl << 6*e%MOD*m%MOD << endl << (-18*e%MOD) + MOD << endl << +30*d%MOD*m%MOD << endl << (-25*d%MOD)+MOD << endl << +60*c%MOD*m%MOD << endl << +60*b%MOD*m%MOD << endl << +29*b%MOD << endl << +24*a%MOD*m%MOD << endl << +18*a%MOD << endl;
        if(p1 < 0)
            ans = (p1%MOD+MOD * 205555557%MOD)%MOD; 
        else 
            ans = (p1%MOD * 205555557%MOD)%MOD; 
        //cout << ans << " " << p1 << endl;
        cout<<ans%MOD<<endl;
    }
    return 0;
} 