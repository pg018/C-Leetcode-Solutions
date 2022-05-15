#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int last = s.length() - 1;
        while (last >= 0 && s[last] == ' '){--last;}
        s = s.substr(0,last+1);
        reverse(s.begin(),s.end());
        string p;
        p = s.substr(0,s.find(' '));
        return p.length();
    }
};

int main(){
	string s{"   fly me   to   the moon  "};
	Solution obj;
	cout<<obj.lengthOfLastWord(s);
}