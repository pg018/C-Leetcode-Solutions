#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> final_nums{};
        for (auto i{0};i<nums.size();i++){
            final_nums.push_back(pow(nums.at(i),2));
    }
        sort(final_nums.begin(),final_nums.end());
        return final_nums;}
};