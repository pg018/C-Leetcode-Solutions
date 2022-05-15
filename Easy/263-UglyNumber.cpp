#include<iostream>
using namespace std;

class Solution {
public:
    bool isUgly(int num) {
        if (num == 0) {
            return false;
        }
        while (num != 1) {
            if (num % 2 == 0) {
                num = num / 2;
                continue;
            }
            if (num % 3 == 0) {
                num = num / 3;
                continue;
            }
            if (num % 5 == 0) {
                num = num / 5;
                continue;
            }
            return false;
        }
        return true;
    }
};

int main(){
	Solution obj;
	cout << obj.isUgly(30) <<endl;
	cout << obj.isUgly(74297492);
}