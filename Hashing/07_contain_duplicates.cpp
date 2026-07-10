#include<iostream>
#include<vector>     //Hash Map + Previous Index
#include<unordered_map>
using namespace std;
bool containdup(vector<int>&nums,int k){
    unordered_map<int,int>mpp;
    for(int i=0;i<nums.size();i++){
        if(mpp.find(nums[i])!=mpp.end()){
            if(i-mpp[nums[i]]<=k){
            return true;
            }
        }
        mpp[nums[i]] = i;

    }
    return false;

}
int main(){
    int size;
    cout<<"enter size of an array:";
    cin>>size;
    vector<int>arr(size);
    cout<<"enter elements in array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter k :";
    cin>>k;
  bool result =  containdup(arr,k);
  cout<<"result is:"<<boolalpha<<result;

}