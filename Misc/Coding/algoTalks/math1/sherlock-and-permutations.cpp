/*
Author : Mohil Khare
Created On: 05 September 2020, 23:53
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
const ll mod = 1000000007;

using namespace std;

/*

Example:

3 zeroes 4 ones
Required, all permutations with pattern starting from '1'
length of pattern = 3 + 4 = 7
 _ _ _ _ _ _ _
 we need to fill this wil 3 0s and 4 1s. But since pattern starts from 1 so
 1 _ _ _ _ _ _
 we now need to fill this with 3 0s ans 3 1s

 no. of permutations = (length of permutation)! / ((number of times 1st element repeated)! * (number of times 2nd ele rep)! * ... * (nth ele)!)
 So, length of permutation 3 + (4 - 1) = 6 (because one 1 is fixed)
 zero gets repeated 3 times
 one gets repeated 3 times

 so, no(permutations) = 6! / (3! * 3!)
 if number of zeroes is n and one is m,
 no(permutations) = (n + m - 1)! / (n! * (m-1)!)

 now let's talk about some modulus properties:
1. (A + B) % M = (A % M + B % M) % M
2. (A - B) % M = (A % M - B % M) % M
3. (A * B) % M = (A % M * B % M) % M

*/

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {

    }
    return 0;
}


