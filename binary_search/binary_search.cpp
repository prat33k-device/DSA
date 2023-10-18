#include<bits/stdc++.h>
using namespace std;

int search(int i, int j, vector<int> &arr, int t) {

    if(i > j)
        return -1;

    int mid = i + (j-i)/2;

    if(arr[mid] == t) {
        return mid;
    } else if(t < arr[mid]) {
        return search(i, mid-1, arr, t);
    }

    return search(mid+1, j, arr, t);
}

int main () {
    
    int n, t; cin>> n >> t;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin>> arr[i];
    
    cout<< search(0, n-1, arr, t);
    return 0;
}