#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target)  return mid;
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
               
                 high=mid-1;
            }
        }
        return -1;
    }
};
int main(){
    Solution s;
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target=0;
    cout<<"Enter the target element: ";
    cin>>target;
    int index=s.search(nums,target);
    if(index!=-1)  cout<<"Element found at index: "<<index<<endl;
    else cout<<"Element not found in the array."<<endl;
}