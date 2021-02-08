#include<bits/stdc++.h>
#include <math.h>
using namespace std;
 
#define ll long long
#define mp make_pair
#define pb push_back
#define rep(n) for(int i=0;i<n;i++)
typedef vector<int> v;
 
 
void solve(){
/// Solution to any problem
    int n,k;
    cin>>n>>k;
    if(n==1){
        cout<<1<<endl;
    }
    ll x = (k-1)/(2*(n-1));
 
    k=k- (x*2*(n-1)+ 1) ;
    //cout<<k<<endl;
    if(k>=0 and k<n){
        cout<<k+1<<endl;
    }
    else{
        cout<<n*2-k-1<<endl;
    }
 
}
 
int main(){
    ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t=1,i=0;
   cin>>t;
   while(t--){
    solve();
 
   }
 
   return 0;
}
 