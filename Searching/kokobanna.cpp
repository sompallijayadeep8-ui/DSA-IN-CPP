#include<iostream>
using namespace std;
int banna(vector<int>&nums,int h){
    int low = 1;
    int high = 0;        //TC:O(n)*O(log(maxnum))
    for(int num:nums){   // O(nlog(maxnum))
       high = max(high,num);
    }
    int ans = high;
    while(low<=high){
        int mid = low+(high-low)/2;
        long long hours = 0;
    
    for(int num:nums){
        hours+=(num+mid-1)/mid;
        if(hours<=h){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }

    }


    
}
return ans;
}
int main(){
    int size;
    cout<<"enter size of array:";
    cin>>size;
    vector<int>vec(size);
    cout<<"enter"<<size<<"elements";
    for(int& element:vec){
        cin>>element;
    }
    int h;
    cout<<"enter hours:";
    cin>>h;
  int result =  banna(vec,h);
    cout<<"fast element to eat in time:"<<result;
}