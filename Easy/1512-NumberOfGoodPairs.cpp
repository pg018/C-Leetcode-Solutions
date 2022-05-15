#include<iostream>
#include<map>
#include<vector>
using namespace std;

// Pair is called good pair if nums[i]==nums[j] where i<j

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map <int,int> count_num;
        for (int i=0;i<nums.size();i++){count_num[nums[i]]++;}
        int answer=0;
        for (int i=0;i<nums.size();i++){
            count_num[nums[i]]-=1;
            answer+=count_num[nums[i]];
        }
        return answer;
    }
};

int main(){
	vector <int> question{1,2,3,1,1,3};
	Solution obj;
	cout << obj.numIdenticalPairs(question) << endl;
}