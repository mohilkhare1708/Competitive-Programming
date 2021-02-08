#include <bits/stdc++.h>
#include <cstring>
#include <fstream>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    char str[n][20];
    for(int i = 0; i < n; i++)
        cin >> str[i];
    cin >> q;
    char que[q][20];
    int a[q] = {0};
    for(int i = 0; i < q; i++) {
        cin >> que[i];
        for(int j = 0; j < n; j++) {
            if(strcmp(que[i], str[j]) == 0)
                a[i]++;
        }
    }
    for (int i = 0; i < q; i++) {
    cout << a[i];
    if (i != q - 1) {
        cout << "\n";
    }
}
}