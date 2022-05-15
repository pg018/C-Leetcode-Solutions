#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = *max_element(arr.begin(),arr.end());
        set <int> arr_set{arr.begin(),arr.end()};
        vector <int> missing_pos;
        int ans;
        for (int i{1};i<=n;++i){
            if (find(arr_set.begin(),arr_set.end(),i)==arr_set.end()){
                missing_pos.push_back(i);}
        }
        if (missing_pos.size()==0){return ans=arr[arr.size()-1]+k;}
        else if (k>missing_pos.size()){return ans=arr[arr.size()-1]+(k-missing_pos.size());}
        else {return ans= missing_pos[k-1];}
        return ans;
    }
};

int main(){
	vector <int> question{2,3,7,10,11,43,543,643,899};
	Solution obj;
	cout << obj.findKthPositive(question,100);
}