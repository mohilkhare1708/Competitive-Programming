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
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;
// using namespace std::chrono;
// auto start = high_resolution_clock::now();
// auto stop = high_resolution_clock::now();
// auto duration = duration_cast<microseconds>(stop - start);
// cout << "Time taken by function: " << duration.count() << " microseconds" << endl;

int main() {
    fastIO;
    fstream in;
    in.open("out3.txt" , ios::in);
    fstream out;
    out.open("ones.txt", ios::out);
    ll t, zero = 0, one = 0, two = 0, three = 0;
    cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll a, b, c, p, q, r, ans; 
        cin >> a >> b >> c >> p >> q >> r;
        in >> ans;
        if(ans == 1) {
            out << a << " " << b << " " << c << endl;
            out << p << " " << q << " " << r << endl << endl;
        }
    }
    cout << "Zeores: " << zero << endl << "Ones: " << one << endl << "Twos: " << two << endl << "Three: " << three;
    return 0;
}