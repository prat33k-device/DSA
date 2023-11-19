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
 
    int n; cin>> n;
    vector<pair<pii, int>> arr(n);
 
    rep(i,0,n-1) {
        pair<pii, int> p;
        cin>> p.ff.ff >> p.ff.ss;
        p.ss = i;
        arr[i] = p;
    }
    
    sort(arr.begin(), arr.end());
 
    int k = 0;
    priority_queue <pii,vector<pii>,greater<pii>> dep_of_rooms;
    stack<int> emt_rooms;
 
    vector<pii> rooms_assigned;
 
    for(int i = 0; i < n; i++) {
 
        int arv = arr[i].ff.ff;
        int dep = arr[i].ff.ss;
        int person_idx = arr[i].ss;
 
        while(!dep_of_rooms.empty() && dep_of_rooms.top().ff < arv) {
            emt_rooms.push(dep_of_rooms.top().ss);
            dep_of_rooms.pop();
        }
 
        pii new_entry;
        new_entry.ff = dep;
 
        if(!emt_rooms.empty()) {
            new_entry.ss = emt_rooms.top();
            emt_rooms.pop();
        } else {
            k++;
            new_entry.ss = k;
        }
 
        rooms_assigned.push_back({person_idx, new_entry.ss});
 
        dep_of_rooms.push(new_entry);
    }
    
    sort(rooms_assigned.begin(), rooms_assigned.end());

    cout<< k << endl;
    for(auto i: rooms_assigned)
        cout << i.ss << " ";
 
    return 0;
}
