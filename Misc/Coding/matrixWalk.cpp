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
#define max 1e18
using namespace std;

vll multiplesOfThree;
sll threeKeep;

class Fraction {
public:
    ll numerator, denominator; 
    Fraction() {
        numerator = 1;
        denominator = 1;
    }
    Fraction(ll n, ll d) {
        numerator = n;
        if (d==0) {
            cout << "ERROR: ATTEMPTING TO DIVIDE BY ZERO" << endl;
            exit(0);
        }
        else
            denominator = d;
    }
    Fraction Sum(Fraction otherFraction) {
        ll n = numerator*otherFraction.denominator+otherFraction.numerator*denominator;
        ll d = denominator*otherFraction.denominator;
        return Fraction(n/gcd(n,d),d/gcd(n,d));
    }
    Fraction Difference(Fraction otherFraction) {
        ll n = numerator*otherFraction.denominator-otherFraction.numerator*denominator;
        ll d = denominator*otherFraction.denominator;
        return Fraction(n/gcd(n,d),d/gcd(n,d));
    }
    Fraction Product(Fraction otherFraction) {
        ll n = numerator*otherFraction.numerator;
        ll d = denominator*otherFraction.denominator;
        return Fraction(n/gcd(n,d),d/gcd(n,d));
    }
    Fraction Division(Fraction otherFraction) {
        ll n = numerator*otherFraction.denominator;
        ll d = denominator*otherFraction.numerator;
        return Fraction(n/gcd(n,d),d/gcd(n,d));
    }
    Fraction findProbability(ll i, string s);
    ll gcd(ll n, ll d) {
        ll remainder;
        while (d != 0) {
            remainder = n % d;
            n = d;
            d = remainder;
        }
        return n;
    }
    void show() {
        if (denominator == 1) 
            cout << numerator << endl;
        else
            cout << numerator << "/" << denominator << endl;
    }
};

map<pair<ll, string>, Fraction> keeper;

Fraction Fraction::findProbability(ll i, string s) {
    Fraction ans;
    if(keeper.find(mp(i, s)) != keeper.end())
        return keeper[mp(i, s)];
    if(i == 1) {
        string a = string(1, s[0]);
        Fraction t1 = keeper[mp(i, a)].Product(findProbability(i+1, s.substr(1, s.length()-1)));
        Fraction x(1, 2);
        Fraction t2 = findProbability(i+10, s.substr(1, s.length()-1)).Product(x);
        ans = t1.Sum(t2);
    }
    else if(i == 100) {
        string a = string(1, s[0]);
        Fraction t1 = keeper[mp(i, a)].Product(findProbability(i-1, s.substr(1, s.length()-1)));
        Fraction x(1, 2);
        Fraction t2 = findProbability(i-10, s.substr(1, s.length()-1)).Product(x);
        ans = t1.Sum(t2);
    }
    else if(i == 10) {
        string a = string(1, s[0]);
        Fraction t1 = keeper[mp(i, a)].Product(findProbability(i-1, s.substr(1, s.length()-1)));
        Fraction x(1, 2);
        Fraction t2 = findProbability(i+10, s.substr(1, s.length()-1)).Product(x);
        ans = t1.Sum(t2);
    }
    else if(i == 90) {
        string a = string(1, s[0]);
        Fraction t1 = keeper[mp(i, a)].Product(findProbability(i+1, s.substr(1, s.length()-1)));
        Fraction x(1, 2);
        Fraction t2 = findProbability(i-10, s.substr(1, s.length()-1)).Product(x);
        ans = t1.Sum(t2);
    }
    else if(i/10 <= 1) {
        string a = string(1, s[0]);
        Fraction t1 = keeper[mp(i, a)].Product(findProbability(i-1, s.substr(1, s.length()-1)));
        t1 = t1.Sum(findProbability(i+10, s.substr(1, s.length()-1)));
        Fraction x(1, 3);
        Fraction t2 = findProbability(i+1, s.substr(1, s.length()-1)).Product(x);
        ans = t1.Sum(t2);
    }
    else if(i/10 <= 9) {
        string a = string(1, s[0]);
        Fraction t1 = keeper[mp(i, a)].Product(findProbability(i-1, s.substr(1, s.length()-1)));
        t1 = t1.Sum(findProbability(i-10, s.substr(1, s.length()-1)));
        Fraction x(1, 3);
        Fraction t2 = findProbability(i+1, s.substr(1, s.length()-1)).Product(x);
        ans = t1.Sum(t2);
    }
    else if(i % 10 == 1) {
        string a = string(1, s[0]);
        Fraction t1 = keeper[mp(i, a)].Product(findProbability(i+10, s.substr(1, s.length()-1)));
        t1 = t1.Sum(findProbability(i-10, s.substr(1, s.length()-1)));
        Fraction x(1, 3);
        Fraction t2 = findProbability(i+1, s.substr(1, s.length()-1)).Product(x);
        ans = t1.Sum(t2);
    }
    else if(i % 10 == 0) {
        string a = string(1, s[0]);
        Fraction t1 = keeper[mp(i, a)].Product(findProbability(i+10, s.substr(1, s.length()-1)));
        t1 = t1.Sum(findProbability(i-10, s.substr(1, s.length()-1)));
        Fraction x(1, 3);
        Fraction t2 = findProbability(i-1, s.substr(1, s.length()-1)).Product(x);
        ans = t1.Sum(t2);
    }
    else {
        string a = string(1, s[0]);
        Fraction t1 = keeper[mp(i, a)].Product(findProbability(i+10, s.substr(1, s.length()-1)));
        t1 = t1.Sum(findProbability(i-10, s.substr(1, s.length()-1)));
        t1 = t1.Sum(findProbability(i-1, s.substr(1, s.length()-1)));
        Fraction x(1, 4);
        Fraction t2 = findProbability(i+1, s.substr(1, s.length()-1)).Product(x);
        ans = t1.Sum(t2);
    }
    keeper[mp(i, s)] = ans;
    return ans;
}

void preCompute() {
    for(ll i = 3; i <= 100; i+=3) {
        multiplesOfThree.pb(i);
        threeKeep.insert(i);
    }
}

void putMap(ll x, ll y) {
    keeper.clear();
    Fraction f(x, y);
    Fraction one(1, 1);
    Fraction diff = one.Difference(f);
    for(ll i = 1; i <= 100; i++) {
        if(threeKeep.find(i) != threeKeep.end()) {
            keeper[mp(i, "Y")] = diff;
            keeper[mp(i, "N")] = f;
        }
        else {
            keeper[mp(i, "Y")] = diff;
            keeper[mp(i, "N")] = f;
        }
    }
}

ll power(ll x, ll y) {  
    ll res = 1;   
    x = x % MOD; 
    if (x == 0) return 0; 
    while (y > 0) {    
        if (y & 1)  
            res = (res*x) % MOD;   
        y = y>>1;  
        x = (x*x) % MOD;  
    }  
    return res;  
}

ll mulmod(ll a, ll b) { 
    ll res = 0; 
    a = a % MOD; 
    while (b > 0) { 
        if (b % 2 == 1) 
            res = (res + a) % MOD; 
        a = (a * 2) % MOD; 
        b /= 2; 
    } 
    return res % MOD; 
} 

int main() {
    ll t, n; cin >> t;
    n = t;
    preCompute();
    Fraction c(100, 1);
    for(ll qq = 0; qq < t; qq++) {
        ll n, a, b; cin >> n >> a >> b;
        putMap(a, b);
        vector<Fraction> probability;
        for(ll i = 0; i < n; i++) {
            ll l; cin >> l;
            string s; cin >> s;
            here;
            Fraction res(0, 1);
            Fraction temp;
            here;
            for(ll j = 1; j <= 100; j++)
                res = res.Sum(temp.findProbability(i, s));
            probability.pb(res.Division(c));
            here;
        }
        vector<double> keep;
        for(auto d : probability)
            keep.pb((double)d.numerator/(double)d.denominator);
        here;
        sort(keep.begin(), keep.end());
        ll fin = mulmod(keep[keep.size()-1] - keep[0], pow(10, 18));
        cout << fin << endl;
    }
    return 0;
}