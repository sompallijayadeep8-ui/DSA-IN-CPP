#include<iostream>
using namespace std;
void kadanes(int arr[],int n){
    int currentsum=0;
    int maxsum=arr[0];
    for(int i=0;i<n;i++){
        if (currentsum>maxsum){
            maxsum=currentsum;
        }
        if(currentsum<0){
            currentsum=0;
        }
    
         
       
    }
    cout<<"maximum is:"<<maxsum;
   

}
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    cout<<"enter elements in array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    kadanes(arr,n);


}