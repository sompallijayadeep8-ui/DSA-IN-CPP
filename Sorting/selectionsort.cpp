#include<iostream>
using namespace std;
void selection(int arr[],int n){
    for(int i=0;i<n;i++){
        int minterm=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minterm]){
                minterm=j;
            }
        }
        if(minterm!=i){
            swap(arr[i],arr[minterm]);
        }
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
    cout<<"selectionsort:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}