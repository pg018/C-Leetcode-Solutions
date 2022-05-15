#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        for (int i=1;i<nums.size();i++){nums[i]+=nums[i-1];}
        for (int i=0;i<nums.size();i++){
            int x,y;
            if (i!=0){x=nums[i-1];}
            else{x=0;}
            y=nums[nums.size()-1] - nums[i];
            if (x==y){return i;}
        }
        return -1;
    }
};

int main(){
	vector<int> question{2,3,-1,8,4};
	Solution obj;
	cout << obj.findMiddleIndex(question);
}