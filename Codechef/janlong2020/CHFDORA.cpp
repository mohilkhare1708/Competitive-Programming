#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>

long int count = 0;
int n, m;

bool colCheck(int i, int j, std::vector<std::vector<int>> &a, int m, int n, int len) {
    if(i+len <= n-1 && i-len >= 0) {
        if(a[i-len][j] == a[i+len][j])
            return true;
        else
            return false;
    }
    else
        return false;
}

void rowCheck(int i, int j, std::vector<std::vector<int>> &a, int m, int n) {
    if(j < m-j) {
        for(int k = j-1; k >= 0; k--) {
            if(a[i][k] == a[i][2*j - k]) {
                if(colCheck(i, j, a, m, n, j-k))
                    count++;
                else
                    break;
            }
            else 
                break;
        }
    }
    else if(j > m-j) {
        for(int k = j-1; k > 2*j - m; k--) {
            if(a[i][k] == a[i][2*j - k]) {
                if(colCheck(i, j, a, m, n, j-k))
                    count++;
                else    
                    break;
            }
            else 
                break;
        }
    }
    else {
        for(int k = j-1; k >= 0; k--) {
            if(a[i][k] == a[i][2*j - k]) {
                if(colCheck(i, j, a, m, n, j-k))
                    count++;
                else
                    break;
            }
            else 
                break;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
	int t, temp;
	std::cin >> t;
	for(int u = 0; u < t; u++) {
        std::vector<std::vector<int>> a;
        count = 0;
        std::cin >> n >> m;
        for(int i = 0; i < n; i++) {
            std::vector<int> row;
            for(int j = 0; j < m; j++) {
                std::cin >> temp;
                row.push_back(temp);
                count++;
            }
            a.push_back(row);
        }
        for(int i = 1; i < n-1; i++) {
            for(int j = 1; j < m-1; j++) {
                rowCheck(i, j, a, m, n);
            }
        }
        std::cout << count << std::endl;
    }
    return 0;
}