#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int ii = 0; ii < t; ii++) {
        int n;
        cin >> n;
        int check[128] = {0};
        int series[n];
        for(int i = 0; i < n; i++) {
            if(i == 0) {
                series[i] = 0;
                check[0]++;
            }
            else {
                if(check[series[i-1]] == 1) {
                    series[i] = 0;
                    check[series[i]]++;
                }
                else if(check[series[i-1]] > 1) {
                    for(int k = i-2; k >= 0; k--) {
                        if(series[k] == series[i-1]) {
                            series[i] = i - 1 - k;
                            check[series[i]]++;
                            break;
                        }
                    }
                }
            }
        }
        /*for(int i = 0; i < n; i++)
            cout << series[i] << " ";
        cout << endl;*/
        cout << check[series[n-1]] << endl;
    }
}