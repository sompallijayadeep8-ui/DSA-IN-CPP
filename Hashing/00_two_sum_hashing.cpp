#include<iostream>
#include<unordered_map>
using namespace std;
vector<int>twosum(vector<int>&nums,int target){
    unordered_map<int,int>mpp;
    int comp = 0;
    for(int i=0;i<nums.size();i++){
        comp = target - nums[i];
        if(mpp.find(comp) != mpp.end()){
            return {mpp[comp],i};
        }
           mpp[nums[i]] = i;
    }
    return {};
  
}
int main(){
    int size;
    cout<<"enter size of an array:";
    cin>>size;
    vector<int>vec(size);
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    int t;
    cout<<"enter targeted number (it is sum of two arrays):";
    cin>>t;
    vector<int>result = twosum(vec,t);
    if(!result.empty()){
    cout << "Indexes: ";
    for(int index : result){
        cout << index << " ";
    }
}
else{
    cout<<"pair not found:";
}

}