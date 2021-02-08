#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mod 1000000007
#define test ll tx; cin>>tx; while(tx--)
typedef long long int ll;
int main() {
	FIO;
	ll power[31];
	ll i;
	power[0]=1;
	for(i=1;i<=30;i++){
	    power[i]=2*power[i-1];
	}
	test{
	    ll n,k,x,i,j;
	    cin>>n>>k;
	    ll a[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    ll count[31];
	    for(i=0;i<31;i++){
	        count[i]=0;
	    }
	    for(i=0;i<n;i++){
	        x=a[i];
	        j=0;
	        while(x!=0){
	            if(x%2==1){
	                count[j]++;
	            }
	            x/=2;
	            j++;
	        }
	    }
	    vector<pair<ll,ll>>res;
	    x=1;
	    for(i=0;i<=30;i++){
	        res.push_back(make_pair(count[i]*x,50-i));
	        x*=2;
	    }
      for(auto x : res) cout << x.second << " " << x.first << endl;
	    sort(res.begin(),res.end());
	    ll ans=0;
	    for(i=30;i>30-k;i--){
	        ans+=power[50-res[i].second];
	    }
	    cout<<ans<<endl;
	}
	return 0;
}