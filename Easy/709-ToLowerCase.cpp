#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        return s;
    }
};

int main(){
	string question{"HeLLo"};
	Solution obj;
	cout<<obj.toLowerCase(question);
}
