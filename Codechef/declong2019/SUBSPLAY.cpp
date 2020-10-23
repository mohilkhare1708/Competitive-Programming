#include <bits/stdc++.h> 
using namespace std; 

int main() {
    int t, n, k;
    cin >> t;
    for(int uu = 0; uu < t; uu++) {
        k = INT32_MAX;
        cin >> n;
        char str[n];
        int alpha[26];
        int minDistance = INT32_MAX;
        for(int i = 0; i < 26; i++)
            alpha[i] = -1;
        cin >> str;
        for(int i = 0; i < n; i++) {
            int letterIndex = (int)str[i]-97;
            if(alpha[letterIndex] != -1) {
                if(minDistance > (i-alpha[letterIndex])) {
                    minDistance = i-alpha[letterIndex];
                    k = n - (i-alpha[letterIndex]);
                }
            }
            alpha[letterIndex] = i;
        }
        if(k == INT32_MAX)
            cout << 0 << endl;
        else 
            cout << k << endl;
    }
}