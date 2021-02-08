/*
Author : Mohil Khare
Created On: 03 February 2021, 14:48
*/

#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define N 5

using namespace std;

pair<int, int> search(char c, char matrix[N][N]) {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++)
            if(matrix[i][j] == c)
                return make_pair(i, j);
    }
    return make_pair(-1, -1);
}

int main() {
    fastIO;
    char matrix[5][5];
    string key, s, alphas = "ABCDEKGHIJKLMNOPQRSTUVWXYZ";
    cout << "Enter Key: " << endl;
    cin >> key;
    cout << "Enter String: " << endl;
    cin >> s;
    set<char> keyAlphas;
    for(auto x : key)
        keyAlphas.insert(x);
    int x = 0, y = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(x < key.length())
                matrix[i][j] = key[x++];
            else {
                while(y < 26) {
                    if(keyAlphas.find(alphas[y]) == keyAlphas.end()) {
                        matrix[i][j] = alphas[y++];
                        break;
                    }
                    else y++;
                }
            }
        }
    }
    cout << "The key matrix:" << endl;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    if(s.length() & 1)
        s += "Z";
    for(int i = 0; i < s.length(); i+=2) {
        pair<int, int> fi = search(s[i], matrix), se = search(s[i+1], matrix);
        if(fi.first == se.first) {
            s[i] = matrix[(fi.first+1)%5][fi.second];
            s[i+1] = matrix[(se.first+1)%5][se.second];
        }
        else if(fi.second == se.second) {
            s[i] = matrix[fi.first][(fi.second+1)%5];
            s[i+1] = matrix[se.first][(se.second+1)%5];
        }
        else {
            int diffi = abs(fi.first - se.first), diffj = abs(fi.second - se.second);
            if(fi.first < se.first) {
                s[i+1] = matrix[(se.first )%5][(se.second- diffj)%5];
                s[i] = matrix[(fi.first )%5][(fi.second+ diffj)%5];
            }
            else {
                s[i+1] = matrix[(se.first )%5][(se.second+ diffj)%5];
                s[i] = matrix[(fi.first )%5][(fi.second- diffj)%5];
            }
        }
    }
    cout << "Encrypted String: " << s << endl;
    return 0;
}