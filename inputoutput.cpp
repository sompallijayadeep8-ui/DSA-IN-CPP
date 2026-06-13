#include<iostream>
using namespace std;
void rev(int arr[],int n){
    cout<<"reversed array:";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
void sum(int arr[],int n){
    int sum=0;
    cout<<"sum of array:";
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
       
    }
    cout<<sum;

}
void findlargest(int arr[],int n){
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>arr[0]){
            largest=arr[i];
        }
    }
    cout<<"largest element:"<<largest;
}
int main(){
    int n;
    cout<<"enter array size:";
    cin>>n;
    int arr[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"entred array:";
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    
  }
  cout<<endl;
  cout<<"even numbers:";
  for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        cout<<arr[i]<<" ";
    }
  }
  cout<<endl;
  cout<<"odd numbers:";
  for(int i=0;i<n;i++){
    if(arr[i]%2!=0){
        cout<<arr[i]<<" ";

    }
  }
  cout<<endl;
  rev(arr,n);
  cout<<endl;
  sum(arr,n);
  cout<<endl;
  findlargest(arr,n);
}