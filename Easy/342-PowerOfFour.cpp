#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n==0){return false;}
        while (n%4==0){
            n = n/4;
        }
        if (n == float(1)){return true;}
        else {return false;}
    }
};

int main(){
	int x{256};
	Solution obj;
	cout<<obj.isPowerOfFour(x);
}