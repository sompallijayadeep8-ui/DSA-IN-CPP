#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int fruits(vector<int>&fruit){
    unordered_map<int,int>mpp;
    int left = 0, maxlen = 0;
    for(int right=0;right<fruit.size();right++){
        mpp[fruit[right]]++;
    
    while(mpp.size()>2){
        mpp[fruit[left]]--;
    
    if(mpp[fruit[left]]==0){
        mpp.erase(fruit[left]);
    }
    left++;
}
    maxlen = max(maxlen,right-left+1);
}
return maxlen;


}
int main(){
    int n;
    cout<<"enter size of an array:";
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int result = fruits(vec);
    cout<<"max window is:"<<result;
}