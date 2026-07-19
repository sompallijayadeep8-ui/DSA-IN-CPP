#include<iostream>
#include<unordered_map>
using namespace std;
int unique(const string &s){
    unordered_map<char,int>mpp;
    for(char ch:s){
        mpp[ch]++;
    }
    for(int i=0;i<s.size();i++){
        s[i];
        if(mpp[s[i]] == 1){
            return i;
        }
    }
    return -1;
}
int main(){
    string s;
    cout<<"enter string :";
    cin>>s;
    int result = unique(s);
    cout<<"first unique element is :"<<result;
}