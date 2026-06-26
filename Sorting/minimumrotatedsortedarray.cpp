#include<iostream>
using namespace std;
int minimum(vector<int>&nums){
    int low = 0;
    int high = nums.size()-1;
    while(low<high){
        int mid = low+(high-low)/2;
        if(nums[mid]>nums[mid+1]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return nums[low];
}
int main(){
    int size;
    cout<<"enter size of array:";
    cin>>size;
    vector<int>vec(size);
    cout<<"enter"<<size<<"elements ";
    for(int& element:vec){
        cin>>element;
    }
   int result = minimum(vec);
   cout<<"minimum sortedarray element is:"<<result;
}