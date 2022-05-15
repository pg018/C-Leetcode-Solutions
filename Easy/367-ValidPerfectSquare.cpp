#include<iostream>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low = 1, high = num;
        while(low <= high){
            long long mid = (low+high) >> 1;
            if(mid * mid == num){
                return true;
            }else if(mid * mid < num){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return false;
    }
};

int main(){
	Solution obj;
	cout<<obj.isPerfectSquare(16)<<endl;
	cout<<obj.isPerfectSquare(2000105819)<<endl;
}