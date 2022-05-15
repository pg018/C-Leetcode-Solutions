#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unsigned long long n{nums.size()};
        int i{0};
        int j{0};
        int ans{0};
        sort(nums.begin(),nums.end());
        while (i<n){
            while (j<n && nums.at(i)==nums.at(j)){j+=1;}
            if (j-i>(n/2)){ans=nums.at(i);}
            i=j;            
        }
        return ans;
    }
};