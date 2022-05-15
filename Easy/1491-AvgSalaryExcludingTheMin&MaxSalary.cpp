#include<iostream>
#include<vector>
#include<numeric> //For accumulate
#include<algorithm> //For max and min element
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        double total = accumulate(salary.begin(),salary.end(),0);
        total = total - *max_element(salary.begin(),salary.end()) - *min_element(salary.begin(),salary.end());
        return total/(salary.size()-2);
    }
};

int main(){
	vector<int> question{4000,3000,1000,2000};
	Solution obj;
	cout << obj.average(question);
}