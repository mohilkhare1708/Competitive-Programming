#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string temp ;
    int x;
    vector <int> arr ;    
    while(getline(cin,temp,' ')) {
        if(temp == "\n") break;
        arr.push_back(stoi(temp));
    }
    // while(cin >> x)
    //     arr.push_back(x);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
