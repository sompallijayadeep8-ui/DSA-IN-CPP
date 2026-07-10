#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int>twosum(vector<int>&nums,int target){
    unordered_map<int,int>mpp;
    for(int i=0;i<nums.size();i++){
        int complement = target-nums[i];
        if(mpp.find(complement)!=mpp.end()){
            return {mpp[complement],i};
        }
        mpp[nums[i]]= i;
    }

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
    int target;
    cout<<"enter target:";
    cin>>target;
   vector<int>result = twosum(arr,target);
   cout<<"indexs of targeted elements:"<<result[0]<<" "<<result[1];


}