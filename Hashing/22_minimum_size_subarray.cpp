#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> subarray(vector<int>&nums,int target){
   int left = 0,minlength =INT_MAX,sum =0,bestleft=-1;
   for(int right=0;right<nums.size();right++){
    sum+=nums[right];
    while(sum>=target){
        int currentlength = right-left+1;
        if(currentlength<minlength){
            minlength = currentlength;
            bestleft = left;
        }
        sum-=nums[left];
        left++;
    }

   }
   if(bestleft == -1){
    return {};
   }
   vector<int>ans;
   for(int i=bestleft;i<bestleft+minlength;i++){
    ans.push_back(nums[i]);
   }
   return ans;


}
int main(){
    int n;
    cout<<"enter size of an array :";
    cin>>n;
    vector<int>vec(n);
    cout<<"enter elements in array:";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int t;
    cout<<"enter target :";
    cin>>t;
    vector<int> result = subarray(vec,t);
    for(int x:result){
        cout<<x<<" ";
    }
}