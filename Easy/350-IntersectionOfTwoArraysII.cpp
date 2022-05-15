#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Solution { //My way 11ms 11mb
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>count_n1;
        map<int,int>count_n2;
        vector <int> answer;
        for (int i=0;i<nums1.size();i++){count_n1[nums1[i]]++;}
        for (int i=0;i<nums2.size();i++){count_n2[nums2[i]]++;}
        map<int,int>::iterator itr;
        if (count_n1.size()>count_n2.size()){
            for (itr=count_n2.begin();itr!=count_n2.end();itr++){
                if (count_n1.find(itr->first)!=count_n1.end()){
                    int c= min(itr->second,count_n1[itr->first]);
                    for (int i=0;i<c;i++){answer.push_back(itr->first);}
                }
            }
            return answer;
        }
        else{
            for (itr=count_n1.begin();itr!=count_n1.end();itr++){
                if (count_n2.find(itr->first)!=count_n2.end()){
                    int c= min(itr->second,count_n2[itr->first]);
                    for (int i=0;i<c;i++){answer.push_back(itr->first);}
                }
            }
        return answer;
    }}
};

class Solution1 {// Using Map & without sort. Internet 7ms 10.8MB
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>freq;
        vector<int>ans;
        for(int i = 0;i<nums1.size();i++){
            freq[nums1[i]]++;
        }
        for(int i = 0;i<nums2.size();i++){
            if (freq[nums2[i]] > 0){
                freq[nums2[i]]--; 
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
};

int main(){
	vector<int>nums1{4,9,5,9};
	vector<int>nums2{9,4,9,8,4,9};
	Solution1 obj;
	for (int i=0;i<obj.intersect(nums1,nums2).size();i++){
		cout << obj.intersect(nums1,nums2)[i] << " ";
	}
}