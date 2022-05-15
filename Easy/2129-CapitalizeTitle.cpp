#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    string capitalizeTitle(string title) {
        vector<string> words;
        string store_word;
        string result = "";
        for(auto character : title) {
            if(character == ' ') {
                words.push_back(store_word);
                store_word = "";
            }
            else{
                store_word = store_word + character;
            }
        }
        words.push_back(store_word);

        for(auto word : words) {
            if(word.size() <= 2){
                for(int i = 0;i < word.size();i++){
                    word[i] = tolower(word[i]);
                }
            }
            else {
                word[0] = toupper(word[0]);
                for(int i = 1;i < word.size();i++){
                    word[i] = tolower(word[i]);
                }
            }
            result = result + word + " ";
        }
        result.pop_back();

        return result;
    }
};

int main(){
	Solution obj;
	string question{"i LoVe lEEtCode"};
	cout << obj.capitalizeTitle(question);
}