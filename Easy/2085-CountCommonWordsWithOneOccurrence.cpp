#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int> hash_1;
        map<string,int> hash_2;
        for (int i=0;i<words1.size();i++){hash_1[words1[i]]++;}
        for (int i=0;i<words2.size();i++){hash_2[words2[i]]++;}
        map <string,int> final_dict;
        map<string,int>::iterator itr;
        for (itr=hash_1.begin();itr!=hash_1.end();itr++){
            if (itr->second==1){final_dict[itr->first]++;}
        }
        for (itr=hash_2.begin();itr!=hash_2.end();itr++){
            if (itr->second==1){final_dict[itr->first]++;}
        }
        int count=0;
        for (itr=final_dict.begin();itr!=final_dict.end();itr++){
            if (itr->second>1){count+=1;}
        }
        return count;
    }
};

int main(){
	vector <string> words1{"leetcode","is","amazing","as","is"};
	vector <string> words2{"amazing","leetcode","is"};
	Solution obj;
	cout << obj.countWords(words1,words2);
}