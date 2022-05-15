#include<bits/stdc++.h>
using namespace std;

class Solution { //28ms 26.8%
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> nums_count;
        vector<int>final_answer;
        vector < pair<int,int> > dict_vector;
        for (int i=0;i<nums.size();i++){nums_count[nums[i]]++;}
        map<int,int>::iterator itr;
        for (itr=nums_count.begin();itr!=nums_count.end();itr++){
            dict_vector.push_back(make_pair(itr->second,itr->first));
        }
        sort(dict_vector.rbegin(),dict_vector.rend());
        for (int i=0;i<k;i++){
            final_answer.push_back(dict_vector[i].second);
        }
        return final_answer;
    }
};