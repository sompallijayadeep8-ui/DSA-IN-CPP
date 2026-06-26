#include<iostream>
using namespace std;
int countoccerence(vector<int>&nums,int target){
    int first=-1;
    int last=-1;
    int low=0;
    int high=nums.size()-1;
    while(low<=high){
   int mid=(low+high)/2;   
    if(nums[mid]==target){
        first=mid;
        high=mid-1;
        
    }
    else if(nums[mid]<target){
        low=mid+1;
     }
    else{
        high=mid-1;
    }
}
    low=0;
    high=nums.size()-1;
    while(low<=high){
      int  mid=(low+high)/2;
    if(nums[mid]==target){
        last=mid;
        low=mid+1;
       
    }
    else if(nums[mid]<target){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
    }

if(first==-1){
    return 0;
}
else{
   return last-first+1;
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
   int result;
  result = countoccerence(vec,target);
   if(result==0){
    cout<<"not found";
   }
   else{
     cout<<"count of occerences:"<<result;
   }
}