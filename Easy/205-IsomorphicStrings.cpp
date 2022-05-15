#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> ums;
        map<char,char> umt;
        for(int i = 0; i < s.length(); ++i)
        {
            if(ums.find(s[i]) != ums.end() && ums[s[i]] != t[i])
                return false;
            if(umt.find(t[i]) != umt.end() && umt[t[i]] != s[i])
                return false;
            ums[s[i]] = t[i];
            umt[t[i]] = s[i];
        }
        return true;
    }
};

int main(){
    Solution obj;
    cout << obj.isIsomorphic("egg","add") << endl << obj.isIsomorphic("foo","bar");
}