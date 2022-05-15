#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for (int i=0;i<paragraph.length();i++){
		if (ispunct(paragraph[i])){paragraph.replace(i,1,1,' ');}
		if (isupper(paragraph[i])){paragraph[i] = tolower(paragraph[i]);}
	    }
        std::stringstream ss(paragraph);
        std::istream_iterator<std::string> begin(ss);
        std::istream_iterator<std::string> end;
        std::vector<std::string> vstrings(begin, end);
        map<string,int> count;
        for (int i=0;i<vstrings.size();i++){
            if (find(banned.begin(),banned.end(),vstrings[i])!=banned.end()){continue;}
            count[vstrings[i]]++;
        }
        map<string,int>::iterator itr;
        vector< pair<int,string> > final_ans;
        for (itr=count.begin();itr!=count.end();itr++){final_ans.push_back(make_pair(itr->second,itr->first));}
        sort(final_ans.begin(),final_ans.end());
        return final_ans[final_ans.size()-1].second;
}};

int main(){
    string question = "Bob hit a ball, the hit BALL flew far after it was hit.";
    vector<string> banned (1,"hit");
    Solution obj;
    cout << obj.mostCommonWord(question,banned);
}