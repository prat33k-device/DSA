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

    parent = vector<int>(5);
    sz = vector<int>(5);

    // O(1) time 
    // O(N) space

    return 0;
}