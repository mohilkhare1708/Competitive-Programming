#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
using namespace std;

long int x, y;

double dist(long int p1, long int p2, long int q1, long int q2, long int e1, long int e2) {
    double distance = sqrt(pow(x-p1, 2) + pow(y-p2, 2)) + sqrt(pow(p1-q1, 2) + pow(p2-q2, 2)) + sqrt(pow(q1-e1, 2) + pow(q2-e2, 2));
    return distance;
}

double dist(long int p1, long int p2, long int q1, long int q2) {
    double distance = sqrt(pow(x-p1, 2) + pow(y-p2, 2)) + sqrt(pow(p1-q1, 2) + pow(p2-q2, 2));
    return distance;
}

double dist(long int p1, long int p2) {
    double distance = sqrt(pow(x-p1, 2) + pow(y-p2, 2));
    return distance;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t, n, m, k;
	cin >> t;
	for(int u = 0; u < t; u++) {
	    cin >> x >> y;
        cin >> n >> m >> k;
        long int red[n][2], green[m][2], blue[k][2];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < 2; j++) 
                cin >> red[i][j];
        for(int i = 0; i < m; i++)
            for(int j = 0; j < 2; j++) 
                cin >> green[i][j];
        for(int i = 0; i < k; i++)
            for(int j = 0; j < 2; j++) 
                cin >> blue[i][j];
        double distance = DBL_MAX, d;
        for(int i = 0; i < n; i++) {
            if(dist(red[i][0], red[i][1]) > distance)
                continue;
            else {
                for(int j = 0; j < m; j++) {
                    if(dist(red[i][0], red[i][1], green[j][0], green[j][1]) > distance)
                        continue;
                    else {
                        for(int l = 0; l < k; l++) {
                            d = dist(red[i][0], red[i][1], green[j][0], green[j][1], blue[l][0], blue[l][1]);
                            //cout << d << endl;
                            if(d < distance)
                                distance = d;
                        }
                    }
                }
            }
        }
        for(int i = 0; i < m; i++) {
            if(dist(green[i][0], green[i][1]) > distance)
                continue;
            else {
                for(int j = 0; j < n; j++) {
                    if(dist(green[i][0], green[i][1], red[j][0], red[j][1]) > distance)
                        continue;
                    else {
                        for(int l = 0; l < k; l++) {
                            d = dist(green[i][0], green[i][1], red[j][0], red[j][1], blue[l][0], blue[l][1]);
                            //cout << d << endl;
                            if(d < distance)
                                distance = d;
                        }
                    }
                }
            }
        }
        cout << setprecision(12) << distance << endl;
    }
    return 0;
}