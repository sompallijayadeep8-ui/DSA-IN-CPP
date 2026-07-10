#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool anagram(const string&s,const string&t){
    if(s.size()!=t.size()){
        return false;
    }
    unordered_map<char,int>mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
     for(char ch:t){
        if(mpp[ch]==0){
            return false;
        }
        mpp[ch]--;
     }
    
     return true;


}
int main(){
    string s,t;
    cout<<"enter first string:";
    cin>>s;
    cout<<"enter second string:";
    cin>>t;
   bool result = anagram(s,t);
   cout<<"your string one is equal to string two: "<<boolalpha<<result;
}