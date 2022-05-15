#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int countElements(vector<int>& nums) {
        int count=0;
        int max_num = *max_element(nums.begin(),nums.end());
        int min_num = *min_element(nums.begin(),nums.end());
        for (int i=0;i<nums.size();i++){
            if (min_num<nums[i] && nums[i]<max_num){count+=1;}
        }
        return count;
    }
};

int main(){
	vector <int> question1{-3,3,3,90};
	vector <int> question2{-89,39,39,-89,-89,39};
	Solution obj;
	cout << obj.countElements(question1) << endl << obj.countElements(question2);
}