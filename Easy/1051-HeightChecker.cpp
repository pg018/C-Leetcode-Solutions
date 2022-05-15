#include <iostream> //Output
#include <vector> //For vector
#include <algorithm> //For copy
#include <iterator> //For back_insertor
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector <int> expected;
        copy(heights.begin(),heights.end(),back_inserter(expected));
        sort(expected.begin(),expected.end());
        int count{0};
        for (int i{0};i<heights.size();i++){
            if (heights.at(i)!=expected.at(i)){count+=1;}
        }
        return count;
    }
};

int main(){
	vector <int> question{5,2,3,4,1};
	Solution obj1;
	cout << obj1.heightChecker(question);
}