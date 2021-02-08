#include <bits/stdc++.h>
#define ll long long int

using namespace std;

bool sortByVal(const pair<int,int> &a, const pair<int,int> &b) { 
    return (a.second < b.second); 
} 

void stableSelectionSort(vector<pair<ll, ll>> a) { 
    for (int i = 0; i < a.size()-1; i++) { 
        int min = i; 
        for (int j = i + 1; j < a.size(); j++) 
            if (a[min].first > a[j].first) 
                min = j; 
        int key1 = a[min].second;
		int key2 = a[min].first;
        while (min > i)  { 
            a[min].first = a[min - 1].first;
			a[min].second = a[min - 1].second;
            min--; 
        } 
        a[i].second = key1;
		a[i].first = key2; 
    } 
} 

int main() {
	ll n, k, ele; cin >> n >> k;
	vector<pair<ll, ll>> keeper; 
	for(ll i = 0; i < n; i++) { 
		cin >> ele; 
		keeper.push_back(make_pair(ele % k, ele));
	}
	//sort(keeper.begin(), keeper.end(), sortByVal);
    for(auto x : keeper) cout << x.first << " " << x.second << endl;
	stableSelectionSort(keeper);
    cout << endl << endl;
    for(auto x : keeper) cout << x.first << " " << x.second << endl;
	for(auto x : keeper) cout << x.second << " ";
	return 0;
}