#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution { //12ms 10.1MB my method
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for (int i=0;i<words.size();i++){
            string sub = words[i].substr(0,pref.length());
            if (sub==pref){count+=1;}
        }
        return count;
    }
};

#include<algorithm>
class Solution1 { //20ms 9.8MB
public:
    int prefixCount(vector<string>& words, string pref) {
        return count_if(begin(words), end(words), [&](const string& w) {
      return w.find(pref) == 0;});
  }
};