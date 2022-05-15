#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//Means if i%10==nums.at(i)
class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        vector <int> ans1;
        for (int i{0};i<nums.size();++i){
            if (i%10==nums.at(i)){ans1.push_back(i);}
        }
        if (ans1.size()==0){return -1;}
        else{int ans=*min_element(ans1.begin(),ans1.end());return ans;}
    }
};

int main(){
	vector <int> question {4,3,2,1};
	Solution obj1;
	cout << obj1.smallestEqual(question);
}