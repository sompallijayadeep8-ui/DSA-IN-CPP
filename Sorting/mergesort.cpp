#include<iostream>
using namespace std;
void merge(vector<int>&arr,vector<int>brr){
    int i=0;
    int j=0;
    vector<int>temp;
    while(i<arr.size() && j<brr.size()){
        if(arr[i]<=brr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(brr[j]);
            j++;
        }
    }
    while(i<arr.size()){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<brr.size()){
        temp.push_back(brr[j]);
        j++;
    }
    cout<<"merge sort:";
    for(int x:temp){
        cout<<x<<" ";
    }
       
}
int main(){
    int size;
    int mize;
    cout<<"enter size of array 1:";
    cin>>size;
    cout<<"enter size of array 2:";
    cin>>mize;
    vector<int>vec(size);
    cout<<"enter"<<size<<"elements";
    for(int& ele:vec){
        cin>>ele;
    }
    vector<int>mec(mize);
    cout<<"enter"<<mize<<"elements";
    for(int& ele:mec){
        cin>>ele;
    }
    merge(vec,mec);

    
}