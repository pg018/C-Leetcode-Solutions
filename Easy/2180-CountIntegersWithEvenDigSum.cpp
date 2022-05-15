#include<iostream>
#include<vector>
#include<string>
#include<numeric> // for accumulate
using namespace std;

class Solution {
public:
    int countEven(int num) {
        int count =0;
        for (int i=1;i<=num;i++){
            vector <int> num_list;
            string number = to_string(i);
            for (auto v:number){
                num_list.push_back((int)(v));
            }
            
            int final_ans = accumulate(num_list.begin(),num_list.end(),0);
            if (final_ans%2==0){count+=1;}
        }
        return count;
    }
};

int main(){
	Solution obj;
	cout << obj.countEven(1000);
}