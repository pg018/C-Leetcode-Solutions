#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set <int> nums_set(nums.begin(),nums.end());
        nums.clear();
        nums.assign(nums_set.begin(),nums_set.end());
        if (nums.size() <= 2){
            return *max_element(nums.begin(), nums.end());
        }
        
        for (int i{1};i<3;i++){
            auto it= find(nums.begin(),nums.end(),*max_element(nums.begin(), nums.end()));
            nums.erase(it);
        }
        return *max_element(nums.begin(), nums.end());
    }
};