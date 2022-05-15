#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int num = left; num <= right; num++){
            bool selfDividing = true;
            int workNum = num;
            while(workNum){
                if(workNum%10==0 || num%(workNum%10)!=0){
                    selfDividing = false;
                    break;
                }
                workNum/=10;
            }
            if(selfDividing) result.push_back(num);
        }
        return result;
    }
};

int main(){
	Solution obj;
	for (int i{0};i<obj.selfDividingNumbers(1,22).size();i++){
		cout<<i<<" ";
	}
}
