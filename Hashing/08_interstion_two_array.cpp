#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
vector<int>twoarray(vector<int>&num1,vector<int>&num2){
     unordered_set<int>set1;
     unordered_set<int>ans;
     for(int num:num1){
        set1.insert(num);
     }
     for(int i=0;i<num2.size();i++){
        if(set1.find(num2[i])!=set1.end()){
            ans.insert(num2[i]);
        }
     }
     vector<int>result;
     for(int num:ans){
        result.push_back(num);
     }
     return result;
}
int main(){
    int size,mize;
    cout<<"enter size of first array:";
    cin>>size;
    vector<int>arr(size);
    cout<<"enter elements in array 1 :";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter size of array 2:";
    cin>>mize;
    vector<int>mrr(mize);
    cout<<"enter elements of array 2 :";
    for(int i=0;i<mize;i++){
        cin>>mrr[i];
    }
    vector<int>res = twoarray(arr,mrr);
  cout<<"common unique elements:";
   for(int num:res){
    cout<<num<<" ";
   }

}