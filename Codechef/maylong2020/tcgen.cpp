#include <bits/stdc++.h>
#include <fstream>

using namespace std;



void printArr(int a[],int n) {
    fstream tc;
    tc.open("newtc.txt", ios::out|ios::app); 
    tc << "8 4" << endl;
    for (int i=0; i<n; i++) 
        tc << a[i] << " "; 
    tc << endl; 
    tc.close();
} 


void heapPermutation(int a[], int size, int n) {
    if (size == 1) { 
        printArr(a, n); 
        return; 
    } 
  
    for (int i=0; i<size; i++) { 
        heapPermutation(a,size-1,n); 
        if (size%2==1) 
            swap(a[0], a[size-1]); 
        else
            swap(a[i], a[size-1]); 
    } 
} 

int main() {
    fstream tc;
    tc.open("newtc.txt", ios::out|ios::app);
    int t = 40320;
    tc << t << endl;
    tc.close();
    int arr[8] = {1,2,3,4,5,6,7,8};
    heapPermutation(arr, 8, 8);
    return 0;
}