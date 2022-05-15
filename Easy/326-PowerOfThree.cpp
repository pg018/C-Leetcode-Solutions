#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n==0){return false;}
        while (n%3==0){
            n = n/3;
        }
        if (n == float(1)){return true;}
        else {return false;}
    }
};

int main(){
	int x{729};
	Solution obj;
	cout << obj.isPowerOfThree(x);
}