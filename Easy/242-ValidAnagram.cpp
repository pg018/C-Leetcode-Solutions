#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if (s==t){return true;}
        else{return false;}
    }
};

int main(){
	string p1{"anagram"};
	string p2{"ngaamar"};
	Solution obj;
	cout << obj.isAnagram(p1,p2);
}