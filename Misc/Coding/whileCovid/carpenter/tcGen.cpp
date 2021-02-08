#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "500" << endl;
    srand(time(NULL));
    for(int i = 0; i < 500; i++) {
        int n = rand() % 400 + 0;
        int k = rand() % 15 + 5;
        cout << n << " " << k << endl;
        int l[k], d[k];
        set<int> keeper;
        for(int i = 0; i < k; i++) {
            int hey = rand() % 25 + 1;
            while(keeper.find(hey) != keeper.end())
                hey = rand() % 25 + 1;
            l[i] = hey;
            keeper.insert(hey);
            d[i] = rand() % 25 + 1;
        }
        sort(l, l+k, greater<int>());
        sort(d, d+k);
        for(int i = 0; i < k; i++)
            cout << l[i] << " ";
        cout << endl;
        for(int i = 0; i < k; i++)
            cout << d[i] << " ";
        cout << endl;
    }
    return 0;
}
