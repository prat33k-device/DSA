#include<bits/stdc++.h>
using namespace std;

int main () {

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    auto i =  v.begin();
    i++;
    i += 2; 
    i -= 1; 
    i--;


    multiset<int> m;
    m.insert(1);
    m.insert(2);
    m.insert(3);
    m.insert(4);
    m.insert(5);

    auto it = m.begin();
    it++;
    // it--;
    // it += 1;               // this operator is not defined for multiset


    advance(it, 2);           // moves the iterator pointer ahead 2 places
    // prev(it, 3);           // this is also not working
    cout<< *it << endl;

    cout<< distance(it, m.end()) << endl;   // return the distance between 2 iterator pointers

    auto it2 = m.rbegin();         // this is the pointer to the last element and moves in reverse when it++
    advance(it2, 3);
    cout<< *it2 << endl;

    return 0;
}