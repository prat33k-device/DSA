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
#define UMAP unordered_map<int,int>
#define MAP map<int,int>
#define PQMAX priority_queue<int>
#define PQMIN priority_queue <int,vector<int>,greater<int>>
#define rep(i,a,b) for(int i = a; i <= b; i++)



int main () {

    int t; cin>> t;
    multiset<ll> s;

    while(t--) {

        int q; cin>> q;
        ll x; cin>> x;

        if(q == 1) {
            s.insert(x);
        } else if(q == 2) {
            ll k; cin>> k;
            auto l = s.upper_bound(x);
            int j = k;
            while(l != s.begin() && j){
                j--; l--;
            }
            if(j == 0) {
                cout<< *l << endl;
            } else {
                cout<< -1 << endl;
            }
        } else if(q == 3) {
            ll k; cin>> k;
            auto l = s.lower_bound(x);
            int j = k-1;
            while(l != s.end() && j) {
                j--; l++;
            }

            if(l != s.end()) {
                cout<< *l << endl;
            } else {
                cout<< -1 << endl;
            }
        }

    }

    return 0;
}