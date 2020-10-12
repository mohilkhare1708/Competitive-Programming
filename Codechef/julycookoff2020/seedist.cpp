// C++ program to count all distinct substrings in a string 
#include<bits/stdc++.h> 
using namespace std; 

int distinctSubstring(string str) 
{ 
	// Put all distinct substring in a HashSet 
	set<string> result ; 

	// List All Substrings 
	for (int i = 0; i <= str.length(); i++) 
	{ 
		for (int j = 1; j <= str.length()-i; j++) 
		{ 

			// Add each substring in Set 
			result.insert(str.substr(i, j)); 
		} 
	} 

	// Return size of the HashSet 
	return result.size(); 
} 

// Driver Code 
int main() 
{ 
	string str; cin >> str;
	cout << (distinctSubstring(str)); 
} 

// This code is contributed by Rajput-Ji 
