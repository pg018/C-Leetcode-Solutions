#include<iostream>
using namespace std;

class Solution { //Time limit exceeded
public:
    int countOdds(int low, int high) {
        int count=0;
        for (int i=low;i<=high;i++){
            if (i%2!=0){count+=1;}
        }
        return count;
    }
};

class Solution1 { //Direct Formula derived thorugh trail and error
public:
    int countOdds(int low, int high) {
        return (high+1)/2-(low/2);
    }
};

int main(){
	Solution1 obj;
	cout << obj.countOdds(1,999999);
}