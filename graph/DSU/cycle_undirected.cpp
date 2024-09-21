 #include<bits/stdc++.h>
using namespace std;

vector<int> parent;
vector<int> sz;

void init_dsu(int v) {
    parent[v] = v;    // initially every element is it's own parent
    sz[v] = 1;        // initially size of every set is 1    
}

int find_set(int v) {      // find the parent of element (to which set an element v belongs to)
    if(v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {  // join 2 sets
    a = find_set(a);
    b = find_set(b);

    if(a != b) {
        if(sz[a] < sz[b])   // always join the smaller set into bigger set
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}

int main() {

    int n, m; cin>> n >> m;

    parent = vector<int>(n+1);
    sz = vector<int>(n+1);
    for(int i = 0; i < n+1; i++) {
        init_dsu(i);
    }
    
    vector<vector<int>> edges;
    for(int i = 0; i < m; i++) {
        int u, v; cin>> u >> v;
        edges.push_back({u, v});
    }

    bool cycle = false;
    for(auto i: edges) {
        if(find_set(i[0]) == find_set(i[1])) {
            cycle = true;
        } else {
            union_sets(i[0], i[1]);
        }
    }
    
    cout<< cycle;

    return 0;
}