#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second

int main () {

    vector<pair<ll,ll>> score;
    pair<ll, ll> r;

    auto low = lower_bound(score.begin(), score.end(), r, [&](const pair<ll,ll> &p1, const pair<ll,ll> &p2) -> bool {
        if(p1.ff != p2.ff)
            return p1.ff > p2.ff;
        return p1.ss < p2.ss;
    });

    return 0;
}