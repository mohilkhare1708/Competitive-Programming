#include <bits/stdc++.h>

using namespace std;

string frequencySort(string s) {
    int charKeeper[62] = {0};
    vector<pair<int, char>> freqKeeper;
    for(int i = 0; i < s.length(); i++) {
        if(islower(s[i]))
            charKeeper[s[i] - 'a']++;
        else if(isupper(s[i]))
            charKeeper[s[i] - 'A' + 26]++;
        else 
            charKeeper[s[i] - '0' + 52]++;
    }
    //for(int i = 0; i < 62; i++) cout << charKeeper[i] << " "; cout << endl;
    //cout << (char)(61-52+'0') << endl;
    for(int i = 0; i < 62; i++) {
        if(charKeeper[i] != 0 && i < 26)
            freqKeeper.push_back(make_pair(charKeeper[i], (char)(i+'a')));
        else if(charKeeper[i] != 0 && i < 52)
            freqKeeper.push_back(make_pair(charKeeper[i], (char)(i-26+'A')));
        else if(charKeeper[i] != 0) 
            freqKeeper.push_back(make_pair(charKeeper[i], (char)(i-52+'0')));
    }
    //for(auto x : freqKeeper) cout << x.first << " " << x.second << endl;
    sort(freqKeeper.rbegin(), freqKeeper.rend());
    string ans = "";
    for(auto x : freqKeeper) {
        for(int i = 0; i < x.first; i++)
            ans += x.second;
    }
    return ans;
}

vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> ans(k);
    map<int, int> keeper;
    sort(nums.rbegin(), nums.rend());
    int placed = 0;
    for(int i = 0; i < nums.size(), placed <= k; i++) {
        //cout << nums[i] << endl;
        int x = i+1;
        while(x < nums.size()) {
            //cout << nums[x] << endl;
            if(nums[x++] != nums[i] && x < nums.size()) {
                cout << "entered " << nums[i] << endl;
                ans[placed] = nums[i];
                i = x-2;
                placed++;
                break;
            }
        }
        //cout << placed << endl;
    }
    cout << ans[0] << " " << ans[1] << endl;
    return ans;
}


int main() {
    cout << frequencySort("abcd123444") << endl;
    vector<int> nums = {1,2,2,2,3,3,4,4,4,4};
    for(auto x : topKFrequent(nums, 2)) cout << x << " "; cout << endl;
}