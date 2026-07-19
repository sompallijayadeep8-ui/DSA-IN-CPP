#include<iostream>
#include<vector>
using namespace std;
bool rotate(const string &s,const string &goal){
    if(goal.size()!= s.size()){
        return false;
    }
    string doublestring = s+s;
    if(doublestring.find(goal) != string::npos) {  //"If the goal is found somewhere in the doubled string..."
        return true;
    }
    else{
        return false;

    }


}
int main(){
    string s,goal;
    cout<<"enter a string :";
    cin>>s;
    cout<<"enter string you want :";
    cin>>goal;
  bool result = rotate(s,goal);
  if(result == 1){
    cout<<"your goal is in string :"<<boolalpha<<result;
  }
  else{
    cout<<"your goal is in string :"<<boolalpha<<result;
  }
}