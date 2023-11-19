#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin>> n;
    
    multiset<long long> st;
    while(n--) {
        char q; cin>> q;
        long long x; cin>> x;
        
        if(q == 'a') {
            st.insert(x);
        } else if(q == 't') {
            if(st.find(x) != st.end())
                st.erase(st.find(x));
        } else if(q == 'c') {
            cout<< st.count(x) << endl;
        }
    }
    return 0;
}