#include <iostream>
#include<map>
#include<vector>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int> counting;
        for (int i=0;i<sentence.length();i++){
            if (counting.find(sentence[i])==counting.end()){counting[sentence[i]]+=1;}
            else{counting[sentence[i]]+=1;}
        }
        vector <char> answer;
        map<char,int>::iterator itr;
        for (itr=counting.begin();itr!=counting.end();itr++){
            answer.push_back(itr->first);}
        if (answer.size()==26){return true;}
        else {return false;}
    }
};