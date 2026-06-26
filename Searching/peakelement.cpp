#include<iostream>
using namespace std;
int peak(vector<int>&nums){
    int low=0;
    int high=nums.size()-1;
    while(low<high){
        int mid = low+(high-low)/2;
        if(nums[mid]<nums[mid+1]){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return nums[low];
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
   int result = peak(vec);
   cout<<"the peak element is="<<result;
}