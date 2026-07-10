#include<iostream>
#include<vector>
using namespace std;
vector<int>prefix;
void num(vector<int>&nums){
    prefix.resize(nums.size());
    prefix[0] = nums[0];
    for(int i=1;i<nums.size();i++){
        prefix[i] = prefix[i-1] + nums[i];
    }
}
int sum(int left,int right){
    if(left == 0){
        return prefix[right];
    }
    return prefix[right] - prefix[left-1];

}
int main(){
    int size;
    cout<<"enter size of an array:";
    cin>>size;
    vector<int>vec(size);
    cout<<"enter numbers in array:";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    int left,right;
    cout<<"enter starting point of your calculation :";
    cin>>left;
    cout<<"enter ending point of your calculation :";
    cin>>right;
    num(vec);
  int result =  sum(left,right);
    cout<<"your expected sum:"<<result;
    
}
