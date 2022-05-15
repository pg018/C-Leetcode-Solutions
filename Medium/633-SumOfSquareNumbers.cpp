#include<bits/stdc++.h>
using namespace std;

class Solution { // 6ms 69% .... 6MB 27%
public:
    bool judgeSquareSum(int c) {
        int c_sqrt = sqrt(c);
        for (int a=0;a<=c_sqrt;a++){
            int b = sqrt(c-pow(a,2));
            if (pow(a,2) + pow(b,2) == c){return true;}
        }
        return false;
    }
};

int main(){
    int question = 5;
    Solution obj;
    cout << obj.judgeSquareSum(question); //Returns true. pow(1,2) + pow(2,2) = 5
}