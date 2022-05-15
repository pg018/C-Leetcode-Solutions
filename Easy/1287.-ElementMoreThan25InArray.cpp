#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map <int,int> dict;
        int length = arr.size();
        int ans;
        for (int i{0};i<length;++i){
            if (dict.find(arr.at(i)) == dict.end()){dict[arr.at(i)]=1;}
            else{dict[arr.at(i)]+=1;}}
        map<int,int>::iterator itr;
        for (itr=dict.begin();itr!=dict.end();++itr){
            if (itr->second > length/4){ans = itr->first;}
        }
        return ans;
    }
};

int main(){
	vector <int> question{1,2,2,6,6,6,6,7,10};
	Solution obj;
	cout<<obj.findSpecialInteger(question);
}