#include<iostream>
using namespace std;
void reversearr(int arr[],int n){
   int left=0;
   int right=n-1;
   while(left<right){
    swap(arr[left],arr[right]);
    left++;
    right--;

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
    reversearr(arr,n);
    cout<<"reverse array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}