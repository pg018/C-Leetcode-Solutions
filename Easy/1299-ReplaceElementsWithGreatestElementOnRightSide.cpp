#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution { // My method 572ms 499.9MB
public:
    vector<int> replaceElements(vector<int>& arr) {
		int i=0;
		while (i<arr.size()-1){
		    vector <int> subvector;
		    subvector.assign(arr.begin()+i+1,arr.end());
		    int element = *max_element(subvector.begin(),subvector.end());
		    arr[i] = element;
		    i+=1;
		}
		arr[arr.size()-1] = -1;
		return arr;
}};

class Solution1 { //Internet Method 35ms 14.6MB
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size(),temp,mx=-1;
        for(int i=n-1;i>=0;i--)
        {
            temp=arr[i];
            arr[i]=mx;
            mx=max(mx,temp);
        }
        return arr;
    }
};

int main(){
	vector <int> question{17,18,5,4,6,1};
	Solution obj;
	for (int i=0;i<obj.replaceElements(question).size();i++){
		cout << obj.replaceElements(question)[i] << " ";
	}
}