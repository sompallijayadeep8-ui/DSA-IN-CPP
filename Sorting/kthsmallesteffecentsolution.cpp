#include<iostream>
#include<vector>
using namespace std;
int parts(vector<int>&arr,int left,int right);

int kth(vector<int>&arr,int left,int right,int k){
    if(left==right) return arr[left];
    int p = parts(arr,left,right);
    int target = k-1;
    if(p == target){
        return arr[p];
    }
    else if(p>target){
        return kth(arr,left,p-1,k);
    }
    else{
        return kth(arr,p+1,right,k);
    }

}
int parts(vector<int>&arr,int left,int right){
    
    int pivot = arr[left];
    int count = 0;
    for(int i = left+1; i<=right;i++ ){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotindex = left+count;
    swap(arr[left],arr[pivotindex]);
    int i=left;
    int j=right;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=arr[pivotindex]){
            i++;

        }
        while(arr[j]>arr[pivotindex]){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotindex;


    
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
  int result = kth(arr,0,size-1,k);
  cout<<"k smallest value is :"<<result;
}

