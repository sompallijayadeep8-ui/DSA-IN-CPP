#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int t){
    int low=0;
    int high=n-1;
   
  
   
    while(low<=high){
    int mid=(low+high)/2;
     cout<<"low="<<low
         <<"high="<<high
         <<"mid="<<mid
         <<"value="<<arr[mid]
         <<endl;
    
    if(arr[mid]==t){
        cout<<"element found at index:"<<mid;
         return mid;
    }
    else if(arr[mid]>t){
        high=mid-1;
    }
    else {
        low=mid+1;
    }
    }
    return -1;
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
    cout<<"enter element to find:";
    int t;
    cin>>t;
   int ans= binarysearch(arr,n,t);
   if(ans==-1){
    cout<<"no element founded enter sorted array:";
   }
      


}