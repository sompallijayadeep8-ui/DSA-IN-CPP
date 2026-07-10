#include<iostream>
#include<vector>
using namespace std;
int thresold(vector<int>&nums,int k,int thresold){
    int slidingwindow = 0;
    int count = 0;
    int target = thresold * k;
    for(int i=0;i<k;i++){
        slidingwindow += nums[i];
        }
         if(slidingwindow >= target){
            count++;
    }
        
        for(int i=k;i<nums.size();i++){
            slidingwindow  = slidingwindow - nums[i-k] + nums[i];
            if(slidingwindow >= target){
                count++;
            }
        }
        return count;
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
    int k;
    cout<<"enter targarted size of an array:";
    cin>>k;
    int t;
    cout<<"enter thersold number(your avg is want to be more than thersold):";
    cin>>t;
   int result = thresold(vec,k,t);
   cout<<"count of your avg greater then thersold energy :"<<result;

}