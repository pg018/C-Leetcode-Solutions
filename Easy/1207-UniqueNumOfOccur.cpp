#include<iostream>
#include<set>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> arr_count;
        map<int,int>::iterator itr;
        vector<int>arr_count_l;
        for (int i{0};i<arr.size();i++){
            if (arr_count.find(arr[i])==arr_count.end()){arr_count[arr[i]]=1;}
            else{arr_count[arr[i]]+=1;}
        }
        for (itr=arr_count.begin();itr!=arr_count.end();itr++){
            arr_count_l.push_back(itr->second);
        }
        set<int> count_set{arr_count_l.begin(),arr_count_l.end()};
        if (count_set.size()==arr_count.size()){return true;}
        else{return false;}
    }
};

int main(){
	Solution obj;
	vector <int> q1{1,2,2,1,1,3};
	vector <int> q2{1,2};
	cout << obj.uniqueOccurrences(q1);
	cout << "\n" << obj.uniqueOccurrences(q2);
}