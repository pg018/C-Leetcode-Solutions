#include<bits/stdc++.h>
using namespace std;

class Solution { //1410ms 6% .... 6MB 88%
public:
    int is_prime(int n) {
        if (n <= 1)
            return 0; 
        int m = (int)(sqrt(n));
        for (int i = 2; i <= m; i++)
            if (n % i == 0)
                return 0;
        return 1;
    }
    
    int reverse(int n){
        int m = 0;
        while (n) {
            m = m*10 + n % 10;
            n /= 10;
        }
        return m;
    }

    int is_palindrome(int n){
        return n == reverse(n);
    }
    
    int primePalindrome(int N) {
        if (1e7 <= N and N <= 1e8)
            N = 100030001;
        // There is no prime palindrome of length 8. (because abcddcba is always a multiple of 11) and 
        //the smallest prime palindrome greater than or equal to 1e8 is 100030001.
        while(1){
            while(is_palindrome(N) == 0) N++;
            if (is_prime(N))
                return N;
            N++;
        }
    }
};

int main(){
    Solution obj;
    cout << obj.primePalindrome(6);
}