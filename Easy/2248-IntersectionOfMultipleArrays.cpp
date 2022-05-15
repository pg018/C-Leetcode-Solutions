#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>nums_0_count;
        for (int i=0;i<nums[0].size();i++){nums_0_count[nums[0][i]]++;}
        map<int,int>::iterator itr;
        for (int i=1;i<nums.size();i++){
            for (int j=0;j<nums[i].size();j++){
                if (nums_0_count.find(nums[i][j])!=nums_0_count.end()){
                    nums_0_count[nums[i][j]]++;
                }
        }}
        vector <int> answer;
        for (itr=nums_0_count.begin();itr!=nums_0_count.end();itr++){
            if (itr->second==nums.size()){answer.push_back(itr->first);}
        }
        sort(answer.begin(),answer.end());
        return answer;
    }
};

int main(){
    vector < vector<int> > question = {{3,1,2,4,5},{1,2,3,4},{3,4,5,6}};
    Solution obj;
    for (int i=0;i<obj.intersection(question).size();i++){
        cout << obj.intersection(question)[i] << " ";
    }
}