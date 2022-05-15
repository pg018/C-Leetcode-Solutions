#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        return count(s.begin(), s.end(), 'A') <= 1 &&
            s.find("LLL") == string::npos;}
};

int main(){
	string question{"PPALLL"};
	Solution obj;
	cout << obj.checkRecord(question);
}