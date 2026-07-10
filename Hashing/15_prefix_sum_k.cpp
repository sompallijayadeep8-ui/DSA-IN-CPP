#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int prefix(vector<int>&nums,int k){
    unordered_map<int,int>mp;
    int prefix=0,needed,count=0;
    mp[0] = 1;
    for(int i=0;i<nums.size();i++){
    prefix += nums[i];
    needed = prefix - k;
     count += mp[needed];
     mp[prefix]++;

    }
    return count;


}
int main(){
    int n;
    cout<<"enter size of an array :";
    cin>>n; 
    vector<int>vec(n);
    cout<<"enter elements in array :";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int k;
    cout<<"enter targeted element :";
    cin>>k;
    

   int result = prefix(vec,k);
   cout<<"count of you targrted number :"<<result;

}
