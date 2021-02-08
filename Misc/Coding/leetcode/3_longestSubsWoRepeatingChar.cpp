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

int lengthOfLongestSubstring(string s) {
    set<char> keeper;
    int start = 0, end = 1;
    keeper.insert(s[start]);
    int len = 1;
    if(s.length() == 0)
        return 0;
    while(start <= s.length() && end <= s.length()) {
        if(keeper.find(s[end]) != keeper.end()) {
            len = max(len, end-start);
            keeper.erase(s[start]);
            start++;
        }
        else {
            keeper.insert(s[end]);
            end++;
        }
        cout << len << endl;
    }
    cout << end << " " << start << endl;
    len = max(len, s.length()-start);
    return len;
}

int main() {
    fastIO;
    string s; cin >> s;
    cout << lengthOfLongestSubstring(s);
    return 0;
}