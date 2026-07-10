#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
bool isomorphic(const string&s,const string&t){
    if(s.size()!=t.size()){
        return false;
    }
    unordered_map<char,char>str1;
    unordered_map<char,char>str2;
    for(int i=0;i<s.size();i++){
        if(str1.find(s[i])!=str1.end()){
           if(str1[s[i]]!=t[i]){
            return false;
           }
        }
        if(str2.find(t[i])!=str2.end()){
            if(str2[t[i]]!=s[i]){
                return false;
            }
        }
        str1[s[i]] = t[i];
        str2[t[i]] = s[i];
    }
    return true;
    

}
int main(){
    
    string s,t;
    cout<<"enter first string:";
    cin>>s;
    cout<<"enter second string:";
    cin>>t;
   bool result = isomorphic(s,t);
   cout<<"your string one is equal to string two: "<<boolalpha<<result;
}