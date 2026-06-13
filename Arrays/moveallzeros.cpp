#include<iostream>
using namespace std;
void movezero(int arr[],int n){
   int count=0;
   for(int i=0;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[count]);
        count++;
    }
   }
}
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter elements in array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];  
    }
    cout<<"moved all zeros to end:";
    movezero(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}