#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>arr_cnt;
        vector<int> counts;
        for (int i=0;i<arr.size();i++){arr_cnt[arr[i]]++;}
        map<int,int>::iterator itr;
        for (itr=arr_cnt.begin();itr!=arr_cnt.end();itr++){
            counts.push_back(itr->second);
        }
        int ans = arr_cnt.size();
        sort(counts.begin(),counts.end());
        for (int i=0;i<counts.size();i++){
            k-=counts[i];
            if (k<0){break;}
            ans -= 1;
        }
        return ans;
    }
};

int main(){
    vector<int>question;
    question.push_back(4);
    question.push_back(3);
    question.push_back(1);
    question.push_back(1);
    question.push_back(3);
    question.push_back(3);
    question.push_back(2);
    Solution obj;
    cout << obj.findLeastNumOfUniqueInts(question,3);
}