#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string str_rev(str);
        reverse(str_rev.begin(),str_rev.end());
        bool ans;
        if (str==str_rev){ans=true;}
        else{ans=false;}
        return ans;
    }
};

int main(){
	int x{121};
	int y{-121};
	Solution obj;
	cout <<x<<" = "<<obj.isPalindrome(x)<<endl;
	cout<<y<<" = "<<obj.isPalindrome(y)<<endl;
}