#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumBase(int n, int k) {
        vector <int> digits_k;
        while (n!=0){
            int digit = n%k;
            digits_k.push_back(digit);
            n /= k;
        }
        return accumulate(digits_k.begin(),digits_k.end(),0);
    }
};

int main(){
    Solution obj;
    cout << obj.sumBase(34,6);
    //34 (base 10) expressed in base 6 is 54. 5 + 4 = 9.
}