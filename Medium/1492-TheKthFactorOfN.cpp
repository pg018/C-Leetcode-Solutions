#include<bits/stdc++.h>
using namespace std;

class Solution { // 0ms 100% ..... 6.2MB 15%
public:
    int kthFactor(int n, int k) {
        vector <int> factors = this->getFactors(n);
        if (factors.size()<k){return -1;}
        else{return factors.at(k-1);}
    }
    
    vector<int> getFactors(int number){
        vector<int> factors;
        for (int i=1;i<=number;i++){
            if (number%i==0){factors.push_back(i);}
        }
        return factors;
    }
};

int main(){
    int question=12,k_value=2;
    Solution obj;
    cout << obj.kthFactor(question,k_value);
}