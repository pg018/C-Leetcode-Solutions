#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        vector <int> answer;
        vector <int> neg;
        for (int i=1;i<(n/2)+1;i++){answer.push_back(i);}
        for (int i=0;i<answer.size();i++){neg.push_back(-1*answer[i]);}
        answer.insert(answer.end(),neg.begin(),neg.end());
        if (n%2==0){return answer;}
        else{answer.push_back(0);return answer;}
    }
};

int main(){
	Solution obj;
	for (int i=0;i<obj.sumZero(20).size();i++){
		cout << obj.sumZero(20)[i] << " ";
	}
	cout << endl;
	for (int i=0;i<obj.sumZero(17).size();i++){
		cout << obj.sumZero(17)[i] << " ";
	}
}