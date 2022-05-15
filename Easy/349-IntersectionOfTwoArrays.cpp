#include<iostream>
#include<map>
#include<vector>
using namespace std;
/*Alternate way of solving this is to find the intersection using sets which contains the maps integers. Using intersection,
we find common elements and then convert it into set
*/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>count_n1;
        map<int,int>count_n2;
        vector <int> answer;
        for (int i=0;i<nums1.size();i++){count_n1[nums1[i]]++;}
        for (int i=0;i<nums2.size();i++){count_n2[nums2[i]]++;}
        map<int,int>::iterator itr;
        if (count_n1.size()>count_n2.size()){
            for (itr=count_n2.begin();itr!=count_n2.end();itr++){
                if (count_n1.find(itr->first)!=count_n1.end()){
                    answer.push_back(itr->first);
                }
            }
            return answer;
        }
        else{
            for (itr=count_n1.begin();itr!=count_n1.end();itr++){
                if (count_n2.find(itr->first)!=count_n2.end()){
                    answer.push_back(itr->first);
                }
            }
            return answer;
        }
    }
};

int main(){
	vector<int>nums1{4,9,5};
	vector<int>nums2{9,4,9,8,4};
	Solution obj;
	for (int i=0;i<obj.intersection(nums1,nums2).size();i++){
		cout << obj.intersection(nums1,nums2)[i] << " ";
	}
}