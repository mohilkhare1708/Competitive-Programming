#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    vector<int> possParts;
    for(int i = 1; i <= s.length()/2; i++)
        if(s.length() % i == 0)
            possParts.push_back(i);
    int ans = 1;
    for(int i = 0; i < possParts.size(); i++) {
        string check = s.substr(0, possParts[i]);
        int x = possParts[i];
        bool match = true;
        while(true) {
            if(x < s.length()) {
                string checking = s.substr(x, possParts[i]);
                if(check != checking) {
                    match = false;
                    break;
                }
                else
                    x += possParts[i];
            }
            else 
                break;
        }
        if(match) {
            ans = s.length() / possParts[i];
            break;
        }
    }
    cout << ans << endl;
}