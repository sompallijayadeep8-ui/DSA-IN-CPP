#include<iostream>
#include<vector>
using namespace std;
int navie(const string &note,const string &pattern){
   
    if(pattern.size()>note.size()){
        return -1;
    }
    for(int i=0;i<=note.size()-pattern.size();i++){
        bool found = true;
        for(int j=0;j<pattern.size();j++){
            if(note[i+j] != pattern[j]){
                found = false;
                break;
            }
           
        }
        if(found){
            return i;
        }
    }
}
int main(){
    string note,pattern;
    cout<<"enter note :";
    cin>>note;
    cout<<"enter pattern :";
    cin>>pattern;
    int result = navie(note,pattern);
    cout<<"the number :"<<result;
}