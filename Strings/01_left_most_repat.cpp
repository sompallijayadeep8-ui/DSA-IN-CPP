#include<iostream>
#include<unordered_map>
using namespace std;
int repat(const string &s){
    unordered_map<char,int>mpp;
   for(char ch:s){
    mpp[ch]++;
   }
   for(int i=0;i<s.size();i++){
    s[i];
    if(mpp[s[i]]>1){
        return i;
    }
    

   }
   return -1;

}
int main(){
    string s;
    cout<<"entetr string :";
    cin>>s;
    int result = repat(s);
    if(result == -1){
        cout<<"no occurencs found";
    }
    else{
    cout<<"index of first left occerence :"<<result;
    }
}