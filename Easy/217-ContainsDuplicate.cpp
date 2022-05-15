#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
using namespace std;

class Solution { //202ms
public:
    bool containsDuplicate(vector<int>& nums) {
        set <int> set1(nums.begin(),nums.end());
        bool ans;
        if (nums.size()==set1.size()){ans=false;}
        else{ans = true;}
        return ans;
    }
};

class Solution1{ //184ms
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int,int> nums_dict;
        map <int,int>::iterator itr;
        bool ans;
        for (int i{0};i<nums.size();++i){
            if (nums_dict.find(nums.at(i))==nums_dict.end()){nums_dict[nums.at(i)]=1;}
            else{nums_dict[nums.at(i)]+=1;}
        }
        for (itr=nums_dict.begin();itr!=nums_dict.end();++itr){
            if (itr->second>=2){ans=true;break;}
            else{ans=false;}
        }
        return ans;
    }
};

int main(){
	vector <int> question{1,2,3,4,5,1,3,4};
	Solution1 obj1;
	Solution obj;
	cout << obj1.containsDuplicate(question)<<endl;
	cout<<obj.containsDuplicate(question)<<endl;
}