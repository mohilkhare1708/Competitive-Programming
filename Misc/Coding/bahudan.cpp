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
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;



ll reversDigits(ll num) { 
    ll rev_num = 0; 
    while(num > 0) { 
        rev_num = rev_num*10 + num%10; 
        num = num/10; 
    } 
    return rev_num; 
} 

ll countDigit(ll n) { 
    return floor(log10(n) + 1); 
} 

ll countDigits2n(ll n) { 
    return (n * log10(2) + 1); 
} 

bool check(ll dig, ll num) {
    ll temp = num;
    while(temp > 0) {
        if(temp % 10 == dig)
            return false;
        temp /= 10;
    }
    return true;
}

/*
* rev(n) is a prime number
* digits(rev(n)) == rev(digits(n)) == digits(digits(2^rev(n)-1))
* n % 10 not in digits(2^rev(n) - 1)
* n % 142 == 0
* n >= 1000
*/

int main() {
    for(ll i = 1000; i <= 1000000; i++) {
        //cout << "\t" << i << endl;
        ll revNum = reversDigits(i);
        if(i % 142 == 0) {
            if(isPrime[revNum-1]) {
                ll units = i % 10;
                ll approx = countDigits2n(revNum);
                if(check(units, approx)) {
                    ll a = countDigit(revNum);
                    ll dig = countDigit(i); 
                    ll b = reversDigits(dig);
                    ll c = countDigit(approx);
                    if(a == b && b == c)
                        cout << i << endl;
                }
            }
        }
    }
}
