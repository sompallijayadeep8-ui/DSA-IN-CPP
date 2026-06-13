#include<iostream>
using namespace std;
int serch(int arr[],int n,int m){
    if(n==0)       return -1;
    if(arr[0]==m)  return 0;
    int res=serch(arr+1,n-1,m);
    if(res==-1)    return -1;
    else            return res+1;
}
int main(){
    int n,m;
    cout<<"enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to be searched :";
    cin>>m;
    int res=serch(arr,n,m);
    if(res==-1){
        cout<<"element not found in the array";
    }
    else{
        cout<<"element found at index :"<<res;
    }
    return 0;
}