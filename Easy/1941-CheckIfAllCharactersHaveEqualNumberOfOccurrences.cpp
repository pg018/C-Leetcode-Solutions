#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map <char,int> s_hash;
        for (int i=0;i<s.length();i++){
            if (s_hash.find(s[i])==s_hash.end()){s_hash[s[i]]=1;}
            else{s_hash[s[i]]+=1;}
        }
        map<char,int>::iterator itr;
        vector <int> answer;
        for (itr=s_hash.begin();itr!=s_hash.end();itr++){
            answer.push_back(itr->second);
        }
        return equal(answer.begin() + 1, answer.end(), answer.begin());
    }
};