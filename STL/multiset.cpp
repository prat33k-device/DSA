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
 
 
int main () {
 
    int n,m; cin>> n >> m;
    multiset<int> price;
    vector<int> maxp(m);
    rep(i, 0, n-1) {
        int x; cin>> x;
        price.insert(x);
    }
    rep(i, 0, m-1) cin>> maxp[i];

    // find element that are less than or equal to maxp[i] with replacement
    for(int i = 0; i < m; i++) {
        auto x = price.upper_bound(maxp[i]);

        if(x == price.begin() || *--x > maxp[i]) {
            cout<< "-1" << endl;
        } else {
            cout<< *x << endl;
            price.erase(x);
        }
    }
 
    return 0;
}
