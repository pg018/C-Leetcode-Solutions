#include <iostream>
#include<vector>
#include <algorithm> //This is for sort function
#include <numeric> //This is for accumulate function
using namespace std;
//The length of vector is multiple of 20
class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size()/20;
        sort(arr.begin(),arr.end());
        for (int i{0};i<n;i++){
            arr.erase(arr.begin());
            arr.pop_back();
        }
        double ans = double(accumulate(arr.begin(),arr.end(),0))/(arr.size());
        return ans;
    }
};

int main(){
	vector <int> ques{6,0,7,0,7,5,7,8,3,4,0,7,8,1,6,8,1,1,2,4,8,1,9,5,4,3,8,5,10,8,6,6,1,0,6,10,8,2,3,4};
	Solution obj;
	cout << obj.trimMean(ques);
}