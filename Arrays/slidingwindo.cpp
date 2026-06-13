#include<iostream>
using namespace std;
void slide(int arr[],int n,int k){
    int windo=0;
    for(int i=0;i<k;i++){
        windo+=arr[i];
    }
    int maxsum=windo;
    for(int i=k;i<n;i++){
        windo=windo-arr[i-k]+arr[i];
        if(windo>maxsum){
            maxsum=windo;
        }
    }
    cout<<"max of k is:"<<maxsum<<" ";
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
    int k;
    cout<<"enter substring of this:";
    cin>>k;
    slide( arr, n, k);

    
}