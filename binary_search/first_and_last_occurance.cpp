#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

int binary_search(int i, int j, vector<int> &nums, int t, bool isFirst) {

    if(i > j)
        return -1;

    int mid = i + (j-i)/2;

    if(t == nums[mid]) {
        if(isFirst) {
            if(mid == 0 || nums[mid-1] != nums[mid])
            return mid;
            return binary_search(i, mid-1, nums, t, isFirst);
        } else {
            if(mid == nums.size()-1 || nums[mid] != nums[mid+1])
                return mid;
            return binary_search(mid+1, j, nums, t, isFirst);
        }
        
    } else if(t < nums[mid]) {
        return binary_search(i, mid-1, nums, t, isFirst);
    }

    return binary_search(mid+1, j, nums, t, isFirst);
}

vector<int> searchRange(vector<int>& nums, int target) {
    
    return {binary_search(0, nums.size()-1, nums, target, true), binary_search(0, nums.size()-1, nums, target, false)};
}

int main() {

    

    return 0;
}