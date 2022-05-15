#include<iostream>
#include<vector>
#include <cmath> //trunc and log10 required
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        vector <int> ans;
        for (int num:nums){
            //int length = trunc(log10(num)) + 1; //both methods are correct. But the commented one is more efficient one
			int length = to_string(num).length();
            if (length%2==0){ans.push_back(num);}
        }
        return ans.size();
    }
};

int main(){
	vector <int> question{555,901,482,1771};
	Solution obj;
	cout <<obj.findNumbers(question);
}