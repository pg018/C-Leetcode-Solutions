#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        vector <int> digits;
        while (n>0){
            int digit = n%10;
            n /= 10;
            digits.push_back(digit);
        }
        auto multi = accumulate(begin(digits),end(digits),1,multiplies<double>());
        auto add = accumulate(begin(digits),end(digits),0);
        return multi-add;
    }
};

int main(){
	int x{234};
	Solution obj;
	cout<<obj.subtractProductAndSum(x)<<endl;
}