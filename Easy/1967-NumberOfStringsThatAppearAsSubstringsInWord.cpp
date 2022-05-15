#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for (auto w:patterns){
            if (word.find(w)!=string::npos){count+=1;}
        }
        return count;
    }
};

int main(){
	vector<string> pattern{"a","abc","bc","d"};
	string word = "abc";
	Solution obj;
	cout << obj.numOfStrings(pattern,word);
}