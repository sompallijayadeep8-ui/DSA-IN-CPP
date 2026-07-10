#include<iostream>
#include<vector>
using namespace std;
vector<int> prefix(vector<int>&nums){
    vector<int>prefix(nums.size());
    if(nums.empty()){
        return {};
    }
    prefix[0] = nums[0];
    for(int i=1;i<nums.size();i++){
        prefix[i] = prefix[i-1] + nums[i];
    }
    return prefix;

}
int main(){
    int size;
    cout<<"enter size of an array:";
    cin>>size;
    vector<int>vec(size);
    cout<<"enter elements in array:";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
   vector<int> result =  prefix(vec);
    cout<<"sum of your array :";
    for(int it:result){
        cout<<it<<" ";
    }

}