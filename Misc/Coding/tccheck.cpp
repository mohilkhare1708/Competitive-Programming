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

int main() {
    fastIO;
    fstream in;
    in.open("oop.txt", ios::in);
    for(ll q = 0; q < 4; q++) {
        string s1, s2;
        //cin >> s1;
        in >> s2;
        cout << s1 << " " << s2 << endl;
        if(s1 != s2) {
            cout << q+1 << " Your: " << s1 << " Correct: " << s2 << endl;
        }
    }
    return 0;
}