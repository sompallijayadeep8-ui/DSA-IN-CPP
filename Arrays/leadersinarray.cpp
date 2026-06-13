#include<iostream>
using namespace std;
void leaders(int arr[],int n){
    int maxright=arr[n-1];
    cout<<maxright<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>maxright){
            cout<<arr[i]<<" ";
            maxright=arr[i];
        }
    }
}
int main(){
    int n;
    
    cout<<"enter size of an array:";
    cin>>n;
    int arr[n];
    cout<<"enter elements in array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leaders(arr,n);
} 
