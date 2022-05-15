#include<iostream>
#include<vector>
#include<algorithm> //For *max_element
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if (nums.size()==1){return 0;}
        vector <int> ans;
        int max_num = *max_element(nums.begin(),nums.end());
        vector <int>::iterator itr = find(nums.begin(),nums.end(),max_num);
        int num_ind = distance(nums.begin(),itr);
        nums.erase(nums.begin()+num_ind);
        for (int i{0};i<nums.size();i++){
            if (max_num >= nums[i]*2){ans.push_back(1);}
        }
        if (ans.size()==nums.size()){return num_ind;}
        else{return -1;}
    }
};

int main(){
	Solution obj;
	vector <int> question{3,6,1,0};
	cout<<obj.dominantIndex(question);
}