#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100005;
const long long int MOD = 2;
long long int v1[MAXN], v2[MAXN];
long long int power(long long int a, int b)
{
	if(!b)
		return 1;
	long long int ans = power(a, b/2);
	ans = (ans*ans)%MOD;
	if(b%2)
		ans = (ans*a)%MOD;
	return ans;
}
int pentagonal(int x)
{
	return (x*(3*x - 1))/2;
}
long long int comb(int r)
{
	return (v1[r]*power(v2[r], MOD-2))%MOD;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		// compute stuff for comb
		v1[0] = 1;
		v2[0] = 1;
		for (int i = 1; i <= k; ++i)
		{
			v1[i] = (v1[i-1]*(n - 1 + i))%MOD;
			v2[i] = (v2[i-1]*i)%MOD;
		}
		//
		long long int ans = 0;
		for (int i = 1; ; ++i)
		{
			long long int den = k - pentagonal(i) - i;
			if(den < 0)
				break;
			long long int temp = comb(den);
			if(i%2)
				temp = MOD - temp;
			ans = (ans + temp)%MOD;
		}
		for (int i = 1; ; ++i)
		{
			long long int den = k - pentagonal(i);
			if(den < 0)
				break;
			long long int temp = comb(den);
			if(i%2)
				temp = MOD - temp;
			ans = (ans + temp)%MOD;
		}
		ans = (ans + comb(k))%MOD;
		cout<<ans<<"\n";
	}
	return 0;
}
