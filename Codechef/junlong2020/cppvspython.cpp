#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    // summing 1 to 1000000 using for loop
    auto start = high_resolution_clock::now();
    long long int ans = 0;
    for(int i = 1; i <= 1000000; i++)
        ans += i;
    cout << ans << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
}