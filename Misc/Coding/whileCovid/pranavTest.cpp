#include <bits/stdc++.h>

using namespace std;

template<class K>
void printArray(vector<K> arr) {
    for(auto x : arr)
        cout << x << endl;
}

int main() {
    vector<int> integers = {1,2,3,4};
    vector<float> decimals = {1.1, 3.14};
    vector<string> sentence = {"pranav", "loves", "eating"};
    printArray(integers);
    printArray(decimals);
    printArray(sentence);
    return 0;
}