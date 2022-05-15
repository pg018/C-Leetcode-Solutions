#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> nge(nums1.size(), -1);  //nge - next greater element
        stack<int> st;
        unordered_map<int, int> m;      //since we don`t need any order & there r no duplicates
        
        for(int i=0; i<nums2.size(); i++){
            
            while(!st.empty() && nums2[i] > nums2[st.top()]){
                
                m[nums2[st.top()]] = nums2[i];     
                st.pop();
            }
            
            st.push(i);         //storing the index i.e. "i" is enough
        }
        
        for(int i=0; i<nums1.size(); i++){
            
            if(m.find(nums1[i]) != m.end()){        //just updating our nge vector here with help of the unordered map
                nge[i] = m[nums1[i]];
            }
        }
        
        return nge;
    }
};