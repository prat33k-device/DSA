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
 
// some test cases giving TLE i dont know why
// int main () {
 
//     ll n, x; cin>> n >> x;
//     vector<ll> v(n);
//     unordered_map<ll, ll> mp;
//     rep(i, 0, n-1) {
//         cin>> v[i];
//         mp[v[i]] = i+1;
//     }
 
//     bool fg = true;
 
//     rep(i,0,n-1){
//         if(x-v[i] >= 0 && mp[x-v[i]]-1 > i) {
//             cout<< i+1 << " " << mp[x-v[i]] << endl;
//             fg = false;
//             break;
//         }
//     }
 
//     if(fg)
//         cout<< "IMPOSSIBLE" << endl;
 
 
//     return 0;
// }

int main() {

    int n, x; cin>> n >> x;
    vector<pii> v(n);
    rep(i, 0, n-1) {
        cin>> v[i].ff;
        v[i].ss = i+1;
    }

    sort(v.begin(), v.end(), [&](pii &p1, pii &p2)-> bool {
        return p1.ff < p2.ff;
    });

    int i = 0, j = n-1;

    while(i < j) {

        if(v[i].ff + v[j].ff == x) {
            cout<< v[i].ss << " " << v[j].ss << endl;
            return 0;
        } else if(v[i].ff + v[j].ff < x) {
            i++;
        } else {
            j--;
        }

    }

    cout<< "IMPOSSIBLE" << endl;

    return 0;
}