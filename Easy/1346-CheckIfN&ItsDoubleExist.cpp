#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        set <int> visited;
        for (auto num:arr){
            if (visited.find(num*2) != visited.end()){return true;}
            visited.insert(num);
        }
        set<int> visited1;
        reverse(arr.begin(),arr.end());
        for (auto num:arr){
            if (visited1.find(num*2) != visited1.end()){return true;}
            visited1.insert(num);
        }
        return false;
    }
};