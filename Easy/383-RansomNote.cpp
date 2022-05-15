#include<iostream>
#include<map>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> magazine_dict;
        for (auto m:magazine){magazine_dict[m]++;}
        for (auto s:ransomNote){
            if (magazine_dict.find(s)==magazine_dict.end() || magazine_dict[s]==0){return false;}
            magazine_dict[s]--;
        }
        return true;
    }
};