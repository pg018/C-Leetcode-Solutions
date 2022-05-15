#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

class Solution { //4ms time 10.3MB
public:
    int findLucky(vector<int>& arr) {
        map <int,int> arr_map;
        map<int,int>::iterator itr;
        vector <int> ans;
        ans.push_back(-1);
        for (int i{0};i<arr.size();i++){
            if (arr_map.find(arr.at(i))==arr_map.end()){arr_map[arr.at(i)]=1;}
            else{arr_map[arr.at(i)]+=1;}
        }
        for (itr=arr_map.begin();itr!=arr_map.end();++itr){
            if (itr->first==itr->second){ans.push_back(itr->first);}
        }
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        return ans.at(0);
    }
};

int main(){
	Solution obj;
	vector <int> question{1,2,2,3,3,3}; //Have to return the max if more than one satisfied
	cout << obj.findLucky(question);
}

class Solution1 { //23ms time 10.3MB. Here it takes more time because we have to clear the memory of arr also.
public:
    int findLucky(vector<int>& arr) {
        map <int,int> arr_map;
        map<int,int>::iterator itr;
        
        for (int i{0};i<arr.size();i++){
            if (arr_map.find(arr.at(i))==arr_map.end()){arr_map[arr.at(i)]=1;}
            else{arr_map[arr.at(i)]+=1;}
        }
        arr.clear();
        arr.push_back(-1);
        for (itr=arr_map.begin();itr!=arr_map.end();++itr){
            if (itr->first==itr->second){arr.push_back(itr->first);}
        }
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        return arr.at(0);
    }
};

