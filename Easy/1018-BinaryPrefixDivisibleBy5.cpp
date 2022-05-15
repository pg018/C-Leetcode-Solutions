#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> res;
        int tmp=0;
        for(auto i:nums)
        {
            tmp=(tmp*2+i)%5;
            res.push_back(! (tmp));
        }
        return res;
    }
};

int main(){
	vector<int> question{0,1,1,1,0,1};
	Solution obj;
	for (int i{0};i<obj.prefixesDivBy5(question).size();i++){
		cout << obj.prefixesDivBy5(question).at(i)<<" ";
	}
}