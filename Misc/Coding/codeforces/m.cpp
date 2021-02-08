#include <bits/stdc++.h>
#define IO_OP std::ios::sync_with_stdio(0); std::cin.tie(0);
#define F first
#define S second
#define V vector
#define PB push_back
#define MP make_pair
#define EB emplace_back
#define ALL(v) (v).begin(), (v).end()
#define debug(x) cerr << #x << " is " << x << endl

using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
typedef V<int> vi;

const int INF = 1e9 + 7;

signed main()
{
	IO_OP;
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int sa = 0, na = 0;
		while(n % 2 == 0) n /= 2, sa++;
		while(n % 3 == 0) n /= 3, na++;
		if(n != 1 || sa > na) {
			cout << -1 << endl;
			continue;
		}
		cout << na + na - sa << endl;
	}
	
}



