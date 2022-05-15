#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for (int i=0, j=0;j<nums.size();j++){
            if (nums[j]%2==0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        return nums;
    }
};

int main(){
	Solution ex;
	vector <int> piece {1,3,2,4};
	ex.sortArrayByParity(piece);
}