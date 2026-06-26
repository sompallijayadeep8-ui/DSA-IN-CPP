#include<iostream>
#include<vector>
using namespace std;
int res;
int kth(vector<int>&arr,int k){
    sort(arr.begin(),arr.end());
     res = arr[k-1];
    return res;
}
int main(){
    int size;
    cout<<"enter size of array:";
    cin>>size;
    vector<int>arr(size);
    cout<<"enter elements in array:";
    for(int& ch:arr){
        cin>>ch;
    }
    int k;
    cout<<"enter k small element to find:";
    cin>>k;
  int result = kth(arr,k);
  cout<<"k smallest value is :"<<result;
}
