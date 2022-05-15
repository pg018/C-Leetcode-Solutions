#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

class Solution { //Easiest.
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>counting;
        for (int i=0;i<nums.size();i++){counting[nums[i]]=i;}
        for (int i=0;i<nums.size();i++){
            int complement = target - nums[i];
            if (counting.find(complement)!=counting.end() && counting[complement]!=i){return vector<int>{i,counting[complement]};}
        }
        return vector <int>{};
    }
};

class Solution1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> ixs;
        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(ixs.find(complement) != ixs.end()){
                return vector<int> {i, ixs[complement]};
            }
            ixs[nums[i]] = i;
        }
        return vector<int> {};
    }
};

class Solution2 { // Sorting + Two-Pointers
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> nums2 = nums;
        sort(nums2.begin(), nums2.end());
        int a, b;
        for(int l = 0, r = n-1; l <= r; ){
            if(nums2[l] + nums2[r] < target){++l;}
			else if(nums2[l] + nums2[r] > target){--r;}
			else{
                a = nums2[l];
                b = nums2[r];
                break;}
        }
        vector<int> ans(2);
        for(int i = 0; i < n; ++i){
            if(nums[i] == a){
                ans[0] = i;
                break;}
        }
        for(int i = n-1; i >= 0; --i){
            if(nums[i] == b){
                ans[1] = i;
                break;}
        }
        return ans;
    }
};

int main(){
	vector <int> question{2,7,11,15};
	Solution obj;
	for (int i=0;i<obj.twoSum(question,9).size();i++){
		cout << obj.twoSum(question,9)[i] << " ";
	}
}