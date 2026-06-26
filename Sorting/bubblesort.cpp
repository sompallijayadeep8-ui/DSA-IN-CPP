#include<iostream>
using namespace std;
void bubblesort(vector<int>&nums){
    for(int i=0;i<nums.size()-1;i++){
        int swapped = false;
        for(int j=0;j<nums.size()-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                swapped = true;

            }
        }     
        if(!swapped){
            break;
        }
       
    }
    cout<<"bubble sort";
    for(int i=0;i<nums.size();i++){
        cout<<" "<<nums[i];
       
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
    bubblesort(vec);
    
}


// best case : O(n)
// worest case : O(n^2)