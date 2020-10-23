#include <bits/stdc++.h>
#include <assert.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n, m, q;
        cin >> n >> m >> q;
        int row[n] = {0}, col[m] = {0};
        for(int j = 0; j < q; j++) {
            int x, y;
            cin >> x >> y;
            x--;
            row[x]++;
            y--;
            col[y]++;
        }
        long int evenrow = 0, oddrow = 0, evencol = 0, oddcol = 0;
        for(int e = 0; e < n; e++) {
            if(row[e] % 2 == 0)
                evenrow++;
            else
                oddrow++;
        }
        for(int e = 0; e < m; e++) {
            if(col[e] % 2 == 0)
                evencol++;
            else
                oddcol++;
        }
        long int ans = (oddcol * evenrow) + (oddrow * evencol);
        cout << ans << endl;
    }
	return 0;
}
