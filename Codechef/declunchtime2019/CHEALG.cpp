#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
using namespace std;

int countDigit(long long n) 
{ 
    int count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	for(int u = 0; u < t; u++) {
	    int count = 0;
	    string s;
	    char c, prev;
	    int k = 0;
	    cin >> s;
	    char final[s.length()];
	    prev = s[0];
	    for(int i = 0; i < s.length(); i++) {
            //cout << "i=" << i << endl;
	        if(s[i] == prev) {
	            k++;
                //cout << s[i] << " " << prev << " " << count << endl;
	        }
	        else {
	            count += (countDigit(k) + 1);
	            k = 1;
                //cout << s[i] << " " << prev << " " << count << endl;
	        }
            if(i == s.length() - 1)
	                count += (countDigit(k) + 1);
            //cout << s[i] << " " << prev << " " << count << endl;
	        prev = s[i];
	    }
        //cout << count << " " << s.length() << endl; 
	    if(count < s.length())
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	    //cout << s << endl << final;
	}
	return 0;
}
