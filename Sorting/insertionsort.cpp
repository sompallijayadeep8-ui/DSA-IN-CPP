#include<iostream>
using namespace std;
void insert(vector<int>&nums){
    for(int i=1;i<nums.size();i++){
        int key = nums[i];
        int j=i-1;
    while(j >=0 && nums[j]>key){
        nums[j+1] = nums[j];
        j--;
       

    }
     nums[j+1]=key;
    }
    cout<<"inserction sort:";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

}
int main(){
    int size;
    cout<<"enter size of array:";
    cin>>size;
    vector<int>vec(size);
    cout<<"enter"<<size<<"elements:";
    for(int& element:vec){
        cin>>element;
    }
    insert(vec);
}