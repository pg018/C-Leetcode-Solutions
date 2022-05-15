#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> number_count;
        vector<int> answer;
        for (int i=0;i<nums.size();i++){number_count[nums[i]]++;}
        map<int,int>:: iterator itr;
        for (itr=number_count.begin();itr!=number_count.end();itr++){
            if (itr->second>nums.size()/3){answer.push_back(itr->first);}
        }
        return answer;
    }
};