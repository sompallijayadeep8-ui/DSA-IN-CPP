#include<iostream>
using namespace std;
void rotate(int arr[],int n,int t){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+t)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter target rotate:";
    int t;
    cin>>t;
    rotate(arr,n,t);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}