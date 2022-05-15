#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        bool b;
        for (int i{0};i<s.length();++i){
            if (isalnum(s[i])){result.push_back(tolower(s[i]));}}
        string ans(result);
        reverse(ans.begin(),ans.end());
        if (result==ans){b= true;}
        else{b=false;}
        return b;
    }
};

int main(){
	string s{"A man, a plan, a canal: Panama"};
	Solution obj;
	cout<<obj.isPalindrome(s);
}