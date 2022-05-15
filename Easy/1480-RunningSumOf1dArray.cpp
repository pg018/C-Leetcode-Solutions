#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i=1;i<nums.size();i++){nums[i]+=nums[i-1];}
        return nums;
    }
};

int main(){
	vector <int> question{1,2,3,4,5,34,5435};
	Solution obj;
	auto answer = obj.runningSum(question);
	for (int i=0;i<answer.size();i++){
		cout << answer[i] << " ";
	}
}