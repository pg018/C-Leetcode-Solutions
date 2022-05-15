#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while (find(nums.begin(),nums.end(),original)!=nums.end()){original *= 2;}
        return original;
    }
};

int main(){
	vector <int> question{5,3,6,1,12};
	Solution obj;
	cout << obj.findFinalValue(question,3);
}