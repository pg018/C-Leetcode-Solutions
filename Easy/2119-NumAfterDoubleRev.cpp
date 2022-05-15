#include<iostream>
using namespace std;

class Solution {
public:
    bool isSameAfterReversals(int num) {
        if (num==0){return true;}
        int ans{0};
        int num1{num};
        while (num1%10==0){
            num1 = num1/10;
        }
        while (num1!=0){
            int remainder = num1%10;
            ans = ans*10 + remainder;
            num1 = num1/10;
        }
        num1=0;
        while (ans!=0){
            int remainder = ans%10;
            num1 = num1*10+remainder;
            ans /= 10;
        }
        if (num==num1){return true;}
        else{return false;}
    }
};

int main(){
	Solution obj;
	cout <<"1800 = "<<obj.isSameAfterReversals(1800)<<endl;
	cout <<"526 = "<<obj.isSameAfterReversals(526)<<endl;
}