#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.size() == 0){return 0;}
        
        int longest = 1;
        int i = 0;
        for (auto j = 1; j < nums.size(); ++j){
		if (nums[j] <= nums[j - 1]){i = j;}
        longest = max(longest, j - i + 1);}
        
        return longest;
    }
};

int main(){
	vector <int> question {1,3,5,4,7};
	Solution obj;
	cout << obj.findLengthOfLCIS(question);
}