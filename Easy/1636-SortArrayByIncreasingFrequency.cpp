#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    static bool compare(pair<int,int>&a,pair<int,int>&b){
        return (a.second==b.second)?a.first>b.first:a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        if (nums.size()==1){return nums;}
        map<int,int> counting;
        vector<pair<int,int>>freq_values;
        vector<int>answer;
        for (int i=0;i<nums.size();i++){counting[nums[i]]++;}
        for (auto p:counting){freq_values.push_back(p);}
        sort(freq_values.begin(),freq_values.end(),compare);
        for (auto v:freq_values){
            for (int i=0;i<v.second;i++){answer.push_back(v.first);}
        }
        return answer;
    }
};

int main(){
	vector <int> question{1,1,2,2,2,3};
	Solution obj;
	for (int i=0;i<obj.frequencySort(question).size();i++){
		cout << obj.frequencySort(question)[i] << " ";
	}
}