#include<iostream>
#include<vector>
using namespace std;
int slidingwindow(vector<int>&nums,int k){
    int slidewindow = 0;
    for(int i=0;i<k;i++){
        slidewindow+=nums[i];

    }
    int maxsum = slidewindow;
    for(int i=k;i<nums.size();i++){
         slidewindow = slidewindow-nums[i-k]+nums[i];
        maxsum = max(maxsum,slidewindow);
    }
    return maxsum;
}
int main(){
    int size;
    cout<<"enter size of an array :";
    cin>>size;
    vector<int>vec(size);
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    int k;
    cout<<"enter window size :";
    cin>>k;

   int result = slidingwindow(vec,k);
   cout<<"max sum of your slide size :"<<result;
}