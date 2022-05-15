#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int count{0};
        map<int,int>nums_map;
        map<int,int>::iterator itr;
        for (int i{0};i<nums.size();i++){
            if (nums_map.find(nums.at(i))==nums_map.end()){nums_map[nums.at(i)]=1;}
            else{nums_map[nums.at(i)]+=1;}
        }
        for (itr=nums_map.begin();itr!=nums_map.end();itr++){
            if (itr->second==1){count+=itr->first;}
        }
        return count;
    }
};

int main(){
	vector <int> question1{1,2,3,2};
	vector <int> question2{1,1,1,1,1};
	Solution obj;
	cout<<obj.sumOfUnique(question1)<<endl;
	cout<<obj.sumOfUnique(question2)<<endl;
}