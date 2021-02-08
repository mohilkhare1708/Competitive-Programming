/*
Author : Mohil Khare
Created On: 03 February 2021, 14:31
*/

#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    fastIO;
    string s, cipher;
    cout << "Enter String: " << endl;
    cin >> s;
    int phaseShift;
    cout << "Enter Phase Shift: " << endl;
    cin >> phaseShift;
    for(int i = 0; i < s.length(); i++) {
        if(isupper(s[i]))
            cipher += (char)(int(s[i] - 65 + phaseShift) % 26 + 65);
        else 
            cipher += (char)(int(s[i] - 97 + phaseShift) % 26 + 97);
    }
    cout << "Encrypted String: " << cipher << endl;
    return 0;
}