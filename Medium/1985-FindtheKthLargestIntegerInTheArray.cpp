#include<bits/stdc++.h>
using namespace std;
//GOOD
class Solution{ //332ms 53% ... 55MB 90%
public:
    static bool cmp(string &a,string &b){
        if(a.size()==b.size()){return a<b;}
        return a.size()<b.size();
    }
    string kthLargestNumber(vector<string>& nums, int k){
        sort(nums.begin(),nums.end(),cmp);
        int n=nums.size();
        return nums[n-k];
    }
};