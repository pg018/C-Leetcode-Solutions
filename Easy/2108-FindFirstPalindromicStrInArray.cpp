#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans;
        bool done{false};
        for (int i{0};i<words.size();i++){
            if (done==true){break;}
            else{
            string a = words.at(i);
            string r{a};
            reverse(r.begin(),r.end());
            if (a==r){done=true;ans=words.at(i);}
            else{done=false;}}
        }
        return ans;
    }
};

int main(){
	vector <string> question1{"abc","car","ada","racecar","cool"};
	vector <string> question2{"def","ghi"};
	Solution obj;
	cout << "Question 1 = "<<obj.firstPalindrome(question1)<<endl;
	cout << "Question 2 = "<<obj.firstPalindrome(question2)<<endl;
}