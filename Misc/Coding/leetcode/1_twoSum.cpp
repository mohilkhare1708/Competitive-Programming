//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;
// using namespace std::chrono;
// auto start = high_resolution_clock::now();
// auto stop = high_resolution_clock::now();
// auto duration = duration_cast<microseconds>(stop - start);
// cout << "Time taken by function: " << duration.count() << " microseconds" << endl;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> keeper;
    for(int i = 0; i < nums.size(); i++) {
        if(keeper.find(nums[i]) == keeper.end())
            keeper[nums[i]] = i;
        int req = target - nums[i];
        if(keeper.find(req) != keeper.end())
            return {i, keeper[req]};
    }
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        vector<int> nums = {3, 2, 4};
        int target = 6;
        vector<int> ans = twoSum(nums, target);
        for(auto a : ans) cout << a << " ";
    }
    return 0;
}