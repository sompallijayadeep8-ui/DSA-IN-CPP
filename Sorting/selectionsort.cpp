#include<iostream>
using namespace std;
void selection(int arr[],int n){
    for(int i=0;i<n-2;i++){
        int minterm=i;
        for(int j=i;j<n-1;j++){
            if(arr[j]<arr[minterm]){
                minterm=j;
            }
        }
        if(minterm!=i){
            swap(arr[i],arr[minterm]);
           
        }
    }
      cout<<"selectionsort:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    
    }
   
    
}
int main(){
    int n;
    cout<<"enter size of an array:";
    cin>>n;
    int arr[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection(arr,n);
   
}

// tc in any case : O(n^2)