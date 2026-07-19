#include<iostream>
#include<vector>
#include<string>
using namespace std;
string reverse(const string &s){
    vector<string>v;
    string word = "";
    for(int i=0;i<s.size();i++){
       if(s[i] != ' '){
        word+=s[i];
       }
       else{
        if(!word.empty()){
        v.push_back(word);
        word = "";
        }
       }

        
    }
    if(!word.empty()){
        v.push_back(word);
    }
    string ans = "";
    for(int i=v.size()-1;i>=0;i--){
        ans += v[i];
      if(i!= 0){
        ans+= " ";
      }
    }
    return ans;
}
int main(){
    string s;
    cout<<"enter string :";
    getline(cin,s);
   string result = reverse(s);
   cout<<"reversed string :"<<result;
}