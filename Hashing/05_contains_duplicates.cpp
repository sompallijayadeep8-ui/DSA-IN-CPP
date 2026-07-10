#include<iostream>
#include <unordered_set>
using namespace std;
bool containduplicates(vector<int>&nums){
    unordered_set<int>st;
    for(int num:nums){
        if(st.find(num)!=st.end()){
            return true;
        }
        st.insert(num);
    }
    return false;
}
int main(){
    int size;
    cout<<"enter size of array:";
    cin>>size;
    vector<int>nums(size);
    cout<<"enter elements in array:";
    for(int i=0;i<nums.size();i++){
        cin>>nums[i];
    }
 bool result =  containduplicates(nums);
    cout<<boolalpha<<result;

}