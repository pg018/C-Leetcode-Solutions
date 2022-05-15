#include<iostream>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        unsigned int mask = ~0;
        //we want mask and num's intersection be 0
        while(mask & num){
            mask <<= 1;
        }
        //now we use ~mask
        return ~mask ^ num;
    }
};