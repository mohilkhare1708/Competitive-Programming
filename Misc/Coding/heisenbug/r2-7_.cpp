#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod  1000000007
#define PI 3.1415926535897932384626
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define bg begin()
#define ed end()
#define lst(x) {cout << #x << " = "; for(auto i : x) cout << i << " "; cout << endl;}
#define db(x) cout << #x << " = " << x << endl
#define db2(x, y) cout << #x << " = " << x << "," << #y << " = " << y << endl
ll ans;

ll fact[10000001];
void modFact(ll n) 
{ 
   fact[0] = 1; 
    for (int i = 1; i < n; i++) 
        fact[i] = (fact[i-1] * i) % mod; 
  
} 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    ll t;
    cin >> t;
    modFact(10000001);
    while(t--)
   {     
       ll n,ans;
       cin >> n;
        ans=((fact[n-1])*(fact[n]-2))%mod;
       if(n<3)
       cout << "0\n";
       else
       cout << ans<< endl;
   }   
}