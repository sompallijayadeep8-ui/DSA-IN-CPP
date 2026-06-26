#include<iostream>
using namespace std;
int firstoccerence(vector<int>&nums,int target){
    int low=0;
    int high=nums.size()-1;
    int ans=-1;
    while(low<=high){
       int mid=(low+high)/2;
       if(nums[mid]==target){
         ans=mid;
        high=mid-1;
       }
       else if(nums[mid]<target){
        low=mid+1;
       }
       else{
        high=mid-1;
       }
      
    }
   
    return ans;
   
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
   int result = firstoccerence(vec,target);
   if(result==-1){
    cout<<"target not found";
   }
   else{
   cout<<"first occerence index is:"<<result;
   }


}