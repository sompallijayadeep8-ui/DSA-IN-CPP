#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
bool issame(int a[],int b[]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
bool slidinganagram(const string &s1,const string &s2){
    if(s1.size()>s2.size()){
        return false;
    }
    int s1hash[26] = {0};
    int windowhash[26] = {0};
    int k = s1.length();
    for(char ch:s1){
        s1hash[ch-'a']++;
    }
    for(int i=0;i<k;i++){
        windowhash[s2[i]-'a']++;
    }
        if(issame(s1hash,windowhash)){
            return true;   // here 
        }
    
    for(int i=k;i<s2.size();i++){
        windowhash[s2[i-k]-'a']--;
        windowhash[s2[i]-'a']++;
    
        if(issame(s1hash,windowhash)){
            return true;
        }
    }
    
    return false;
}

int main(){
    string s1,s2;
    cout<<"enter first string :";
    cin>>s1;
    cout<<"enter second string :";
    cin>>s2;
   bool result = slidinganagram(s1,s2);
   cout<<"the string 1 presents in string 2:"<<boolalpha<<result;
}