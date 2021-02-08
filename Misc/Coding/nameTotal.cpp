#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "Enter your name: ";
    string s; getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int ans = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') continue;
        else if(i < s.length()-1)
            cout << (int)(s[i]-96) << " + ", ans += (int)(s[i] - 96);
        else if(i == s.length()-1)
            ans += (int)(s[i] - 96), cout << (int)(s[i]-96) << " = " << ans << "%";
    }
    if(ans == 100)
        cout << "\nAh! A 100% you shall be the king!";
    else 
        cout << "\nBetter luck next LIFE! HAH!";
    return 0;
}