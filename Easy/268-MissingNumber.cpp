#include <iostream>
#include <numeric> //For iota
#include <bits/stdc++.h>//This library includes all libraries // for this ans.erase(remove(ans.begin(),ans.end(),num),ans.end());
using namespace std;
//iota basically increments the values by 1. iota = (first,last position,intial value to start with)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector <int> ans(nums.size()+1);
        iota(ans.begin(),ans.end(),0);
        for (int num:nums){
            ans.erase(remove(ans.begin(),ans.end(),num),ans.end());
        }
        return ans[0];
    }
};

int main(){
	vector <int> question{0,1,2,3,4,5,6,7,9};
	Solution obj;
	cout <<obj.missingNumber(question);
}