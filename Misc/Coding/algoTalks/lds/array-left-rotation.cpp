#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;
long int st[MAX] = {0};
long int top = -1, rear = -1;
int main() {
    long int n, d;
    cin >> n >> d;
    for(long int i = 0; i < n; i++) {
        if(top == -1 && rear == -1)
            top = rear = 0;
        cin >> st[i];
        top++;
    }
    for(long int i = 0; i < d; i++) {
        st[top++] = st[rear++];
    }
    for(long int i = rear; i < top; i++)
        cout << st[i] << " ";
    return 0;
}