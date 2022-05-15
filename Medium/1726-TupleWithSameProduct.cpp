#include<bits/stdc++.h>
using namespace std;

class Solution { //GOOD.
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        map<int,int> map_n;
        int res = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                int prod = nums[i] * nums[j];
                map_n[prod]++;//store product of each possible pair
            }
        }
		map<int,int>::iterator itr;
        for(itr=map_n.begin();itr!=map_n.end();itr++){
            int n=itr->second;
            res += (n*(n-1))/2; //no. of tuple
        }
        return res*8; //Every tuple has 8 permutations
    }
};

int main(){
	vector<int> question;
	question.push_back(1);
	question.push_back(2);
	question.push_back(4);
	question.push_back(5);
	question.push_back(10);
	Solution obj;
	cout << obj.tupleSameProduct(question);
}