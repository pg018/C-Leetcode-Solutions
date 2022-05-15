#include<iostream>
using namespace std;

class Solution {
public:
    uint32_t hammingWeight(uint32_t n) {
        uint32_t answer = 0;
        while (n>0){
            answer+=1;
            n = n & (n-1);
        }
        return answer;
    }
};

int main(){
	uint32_t number = 11111111111111111111111111111101;
	Solution obj;
	cout << obj.hammingWeight(number);
}