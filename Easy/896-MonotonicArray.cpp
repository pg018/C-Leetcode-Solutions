#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
    	cout << boolalpha;
        vector <int> sorted_nums;
        sorted_nums.assign(nums.begin(),nums.end());
        sort(sorted_nums.begin(),sorted_nums.end());
        vector <int> reverse_nums;
        reverse_nums.assign(sorted_nums.begin(),sorted_nums.end());
        reverse(sorted_nums.begin(),sorted_nums.end());
        if (nums==sorted_nums){return true;}
        else if (nums==reverse_nums){return true;}
        else{return false;}}
};

int main(){
	vector <int> question{1,4,5,2,5,2};
	Solution obj;
	cout << obj.isMonotonic(question);
}