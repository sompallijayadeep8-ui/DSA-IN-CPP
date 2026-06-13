#include<iostream>
#include<vector>
using namespace std;
int insert(int arr[],int n,int x,int pos,int cap){
    if(n==cap)  return n;
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
    return n+1;

}
int main(){
    int arr[100]={1,2,3,4,5};
    int n=5;
    int x=10;
    int pos=3;
    int cap=100;
    n=insert(arr,n,x,pos,cap);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
        