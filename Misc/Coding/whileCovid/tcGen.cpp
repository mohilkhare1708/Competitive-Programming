#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define pb push_back
using namespace std;

const ll smax = 900000000;
const ll nmax = 15;
const ll kmax = 5;
const ll rmax = 5;

int main() {
    cout << "50" << endl;
    vll sarr(50); //, narr(50), karr(50), rarr(50);
    for(ll i = 1; i <= 50; i++) {
        ll ele = rand() % smax + i*i;
        ele *= 100;
        sarr.pb(ele);
    }
    /*for(ll i = 1; i <= 50; i++)
        narr.pb(rand() % nmax + i*i);
    for(ll i = 1; i <= 50; i++)
        karr.pb(rand() % kmax + i*i);
    for(ll i = 1; i <= 50; i++)
        rarr.pb(rand() % rmax + i*i);*/
    srand(time(NULL));
    for(ll i = 0; i < 50; i++) {
        ll yo = 750000+i*i*i*7250;
        ll s = rand() % smax + yo, n = rand() % nmax + 1, k = rand() % kmax + 1, r = rand() % rmax + 1;
        cout << s << " " << n << " " << k << " " << r << endl; 
        //system("pause");
    }
}