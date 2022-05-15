#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        map<int,int> num_closeness;
        for (int i=0;i<nums.size();i++){
            int close = abs(nums[i]-0);
            if (num_closeness.find(close)==num_closeness.end()){
                num_closeness[close] = nums[i]; 
            }
            else{num_closeness[close] = max(num_closeness[close],nums[i]);}
        }
        vector < pair<int,int> > final_check;
        map<int,int>::iterator itr;
        for (itr=num_closeness.begin();itr!=num_closeness.end();itr++){
            final_check.push_back(make_pair(itr->first,itr->second));
        }
        sort(final_check.begin(),final_check.end());
        return final_check.at(0).second;
    }
};

int main(){
    vector<int> question{-4,-2,1,4,8};
    Solution obj;
    cout << obj.findClosestNumber(question);
}