#include<bits/stdc++.h>
using namespace std;

class Solution { //694ms 11.3%
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> key_index,answer;
        set<int> set_answer;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==key){key_index.push_back(i);}
        }
        for (int i=0;i<key_index.size();i++){
            for (int j=0;j<nums.size();j++){
                if (abs(key_index[i]-j)<=k){set_answer.insert(j);}
            }
        }
        answer.assign(set_answer.begin(),set_answer.end());
        sort(answer.begin(),answer.end());
        return answer;
    }
};