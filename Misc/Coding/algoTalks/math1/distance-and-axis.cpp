/*
Author : Mohil Khare
Created On: 05 September 2020, 19:09
*/

#include <bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// program specific shorts (if any)
#define mod 1e9+7

/*
What are we supposed to do? 

<-------O-----B------A------>
|(B - O) - (A - B)| = k
|2B - O - A| = k
let O be 0
|2B - A| = k

knowns = k, A
unknowns = B

Q.   Do we need to know B?
Ans. LOL NO!

Observations:

2B = A + k
A + k is even i.e. (A + k) % 2 == 0

odd + odd = even <
odd + even = odd
even + even = even <

A and k both can be EVEN
OR
A and k both can be ODD

k is FIXED
we can jump the point A though!

so if A, k == odd / even : ANS = 0
if A is even k is odd or vice versa, ANS = 1

EDGE CASE?

What if k > A??
ANS = k - A

why?

<-------O-----B------A------>

OA needs to be at least k to make |2B - A| = k true
let's verify

put A = k,

2B = 2k
B = k

to put this in perspective,

<-------O------------(A/B)------>

let's code this O(1) solution now!
*/

ll powMod(ll x, ll y, ll m) {
    ll res = 1;
    x = x % m;
    if (x == 0) return 0;
    while (y > 0) {
        if (y & 1)
            res = (res*x) % m;
        y = y>>1;
        x = (x*x) % m;
    }
    return res;
}

using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll n, k; cin >> n >> k;
        if(k > n)
            cout << k-n << endl;
        else if(n % 2 == k % 2)
            cout << 0 << endl;
        else 
            cout << 1 << endl;
    }
    return 0;
}