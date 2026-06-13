#include<iostream>
using namespace std;
void generateSubsets(int index,vector<int>&nums,vector<int>&current,vector<vector<int>>&result){
    if(index==nums.size()){
        result.push_back(current);
        return;
    }
    // include the current element
    current.push_back(nums[index]);
    generateSubsets(index+1,nums,current,result);
    // exclude the current element
    current.pop_back();
    generateSubsets(index+1,nums,current,result);
}
   int main(){
   vector<int>nums={1,2,3}; // you can modify this to take input from the user if needed
   vector<vector<int>>result;
   vector<int>current;
   generateSubsets(0,nums,current,result);
   cout<<"The subsets are: "<<endl;
   for(auto subset:result){
    cout<<"{ ";
    for(auto num:subset){
        cout<<num<<" ";
    }
    cout<<"}"<<endl;
   }
   return 0;
  }