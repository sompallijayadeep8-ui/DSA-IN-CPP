// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr,int left,int mid,int right){
    vector<int>temp;
    int i = left;
    int j = mid+1;
    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]){
        temp.push_back(arr[i]);
        i++;
    }
    else{
        temp.push_back(arr[j]);
        j++;
    }
}
while(i<=mid){
    temp.push_back(arr[i]);
    i++;
}
while(j<=right){
    temp.push_back(arr[j]);
    j++;
}
for(int k=0;k<temp.size();k++){
    arr[left+k] = temp[k];
}
}
void mergesort(vector<int>&arr,int left,int right){
    if(left>=right){
        return;
    }
    int mid = left+(right-left)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,mid,right);
}
int main(){
    {
    int size;
    cout<<"enter size of array:";
    cin>>size;
    vector<int>arr(size);
    cout<<"enter"<<size<<"elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,size-1);
    cout<<"merge sort:";
    for(int c:arr){
        cout<<c<<" ";
    }

    return 0;
}
}