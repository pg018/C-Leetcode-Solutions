#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector <int> ans;
        sort(nums.begin(),nums.end());
        for (int i{0};i<nums.size();i++){
            if (nums.at(i)==target){ans.push_back(i);}
        }
        return ans;
    }
};

//Have to try with binary search also