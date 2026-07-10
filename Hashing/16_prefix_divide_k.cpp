#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int substringdivide(vector<int>&nums,int k){
    unordered_map<int,int>mp;
   mp[0] = 1;
    int prefix = 0, count = 0;
    for(int i=0;i<nums.size();i++){
        prefix+= nums[i];
    int needed = prefix % k;
    if(needed < 0){
        needed+=k;
    }
    count += mp[needed];
    mp[needed]++;

    }
    return count;


}
int main(){
    int n;
    cout<<"enter size of an array:";
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int k;
    cout<<"enter targarted divide number :";
    cin>>k;
   int result = substringdivide(vec,k);
   cout<<"your targeted number divisible times is:"<<result;
}

//If two prefix sums have the same remainder when divided by k, 
//then the subarray between them is divisible by k.