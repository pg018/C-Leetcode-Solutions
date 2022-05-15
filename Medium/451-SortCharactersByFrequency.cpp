#include<bits/stdc++.h>
using namespace std;

class Solution { //16ms 52%..... 8.5MB 65%
public:
    string frequencySort(string s) {
        string answer;
        map<char,int> char_count;
        vector< pair<int,char> > char_cnt_list;
        for (int i=0;i<s.length();i++){char_count[s[i]]++;}
        map<char,int>::iterator itr;
        for (itr=char_count.begin();itr!=char_count.end();itr++){
            char_cnt_list.push_back(make_pair(itr->second,itr->first));
        }
        sort(char_cnt_list.rbegin(),char_cnt_list.rend());
        for (int i=0;i<char_cnt_list.size();i++){
            for (int j=0;j<char_cnt_list[i].first;j++){
                answer += char_cnt_list[i].second;
            }
        }
        return answer;
    }
};

int main(){
    string question = "PranavGupta";
    Solution obj;
    cout << obj.frequencySort(question);
}