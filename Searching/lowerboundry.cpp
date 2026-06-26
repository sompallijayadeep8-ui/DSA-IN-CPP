#include<iostream>
using namespace std;
int lowerboundry(vector<int>&nums,int target){
    int low=0;
    int high = nums.size()-1;
    int ans = nums.size();
    while(low<=high){
       int mid=low+(high-low)/2;
        if(nums[mid]>=target){
            ans=mid;
            high=mid-1;

        }
        else{
            low=mid+1;
        }
    }
    if(ans==nums.size()){
        return nums.size();
    }
    else{
    return ans;
    }
}
int main(){
    int size;
    cout<<"enter number of elements:";
    cin>>size;
    vector<int>vec(size);
    cout<<"enter"<<size<<"elements:";
    for(int& element:vec){
        cin>>element;
    }
    cout<<"enter your targeted number:";
    int target;
    cin>>target;
    int result=lowerboundry(vec,target);
    if(result==vec.size()){
        cout<<"ELEMENT NOT FOUND";
    }
   else{
    cout<<"LOWER BOUNDRY="<<result;
   }
}