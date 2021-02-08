//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
using namespace std;

const int MAX = 500001; 

int factor[MAX] = {0}; 
void generatePrimeFactors() { 
	factor[1] = 1; 
	for(int i = 2; i < MAX; i++) 
		factor[i] = i; 
	for(int i = 4; i < MAX; i += 2) 
		factor[i] = 2; 
	for(int i = 3; i * i < MAX; i++) { 
		if(factor[i] == i) { 
			for(int j = i * i; j < MAX; j += i) { 
				if(factor[j] == j) 
					factor[j] = i; 
			} 
		} 
	} 
} 

int calculateNoOFactors(int n) { 
	if(n == 1) 
		return 1; 
	int ans = 1, dup = factor[n], c = 1, j = n / factor[n]; 
	while(j != 1) { 
		if (factor[j] == dup) 
			c += 1; 
		else { 
			dup = factor[j]; 
			ans = ans * (c + 1); 
			c = 1; 
		} 
		j /= factor[j]; 
	} 
	ans *= (c + 1); 
	return ans; 
} 

int smallest(int n) { 
    int i = 0;
    while(true) {
        i++;
		if (calculateNoOFactors(i) >= n) 
			return i; 
    }
} 

int main() { 
	generatePrimeFactors(); 
    //ll t; cin >> t;
    cout << "{";
    for(int qq = 1; qq < 201; qq++) {
        //int n; cin >> n;
        cout << smallest(qq) << ", ";
    } 
    cout << "};";
	return 0; 
} 
