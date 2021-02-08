//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
#include <bits/stdc++.h>
//shorts
#define ll long long int 
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define here std::cout << "here" << std::endl;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

//program specific shorts (if any)
#define mod 1e9+7

using namespace std;

int main() {
    fastIO;
    //here;
    ll n, k, ele; cin >> n >> k;
    vll pos, neg;
    ll possum = 0, negsum = 0;
    //here;
    for(ll i = 0; i < n; i++) {
        cin >> ele;
        if(ele >= 0) {
            pos.pb(ele);
            possum += ele;
        }
        else {
            neg.pb(abs(ele));
            negsum += abs(ele);
        }
    }
    //cout << possum << " " << negsum << endl;
    //here;
    ll ans = 0;
    if(pos.empty()) {
        if(k > neg.size()) {
            if((k - neg.size()) & 1)
                ans = negsum - 2*neg[neg.size()-1];
            else 
                ans = negsum;
        }
        else {
            ans = negsum;
            for(ll i = neg.size()-1; i >= k; i--)
                ans -= 2*neg[i];
        }
    }
    else if(neg.empty()) {
        //here;
        if(k & 1)
            ans = possum - 2*pos[0];
        else
            ans = possum;
    }
    else if(k <= neg.size()) {
        //here;
        for(ll i = 0; i < neg.size(); i++) {
            if(i < k)
                ans += neg[i];
            else 
                ans -= neg[i];
        }
        ans += possum;
    }
    else {
        //here;
        if((k - neg.size()) & 1)
            ans = possum + negsum - 2*min(pos[0], neg[neg.size()-1]);
        else 
            ans = possum + negsum;
    }
    cout << ans << endl;
}