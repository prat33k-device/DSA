#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define pii pair<int,int>
#define pll pair<long long, long long>
#define ff first
#define ss second
#define pb push_back
#define umap unordered_map<int,int>
#define map map<int,int>
#define PQMAX priority_queue<int>
#define PQMIN priority_queue <int,vector<int>,greater<int>>
#define rep(i,a,b) for(int i = a; i <= b; i++)

// calculate the sum of squared differences of every pair of elements

int main () {

    int n; cin>> n;
    vll arr(n);
    ll sq_sum = 0;
    for(int i = 0; i < n; i++) {
        cin>> arr[i];
        sq_sum += arr[i]*arr[i];
    }
    
    // convert into post sum
    vll post(n, 0);
    post[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--)
        post[i] = arr[i] + post[i+1];
    
    ll x = 0;
    for(int i = 1; i < n; i++) {
        x += -2*(arr[i-1]*post[i]);
    }

    ll ans =  (n-1)*sq_sum + x;

    cout<< ans << endl;

    return 0;
}