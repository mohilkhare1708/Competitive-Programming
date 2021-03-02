#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int m, h; cin >> m >> h;
        int bmi = m/(h*h);
        if(bmi <= 18) cout << 1 << endl;
        else if(25 > bmi && bmi > 18) cout << 2 << endl;
        else if(30 > bmi && bmi > 24) cout << 3 << endl;
        else cout << 4 << endl;
    }
    return 0;
}