#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int varabale(string s){
    unordered_set<char>st;
    int right = 0;
    int left = 0;
    int maxlen = 0;
   for(right=0;right<s.length();right++){
        while(st.find(s[right])!=st.end()){
            st.erase(s[left]);
            left++;
        }
        st.insert(s[right]);
         maxlen = max(maxlen,right-left+1);
    }
    return maxlen;
    


}
int main(){
    string size;
    cout<<"enter a string :";
    cin>>size;
    int result = varabale(size);
    cout<<"highest substring char number is:"<<result;
   
    
}


/*Problem: Longest Substring Without Repeating Characters
Pattern: Variable Sliding Window + Hash Set
Store: characters inside current window
Why: to know if new char already exists in window
Expand: right++
Shrink: erase s[left], left++
TC: O(n)
SC: O(n)*/