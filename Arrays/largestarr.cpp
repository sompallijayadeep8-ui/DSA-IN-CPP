#include<iostream>
using namespace std;
void largest(int arr[],int n){
    int flag=0,res=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[flag]){
            res=flag;
            flag=i;
        }
        else if(arr[i]!=arr[flag]){
            if(res==-1||arr[i]>arr[res]){
                res=i;
            }
        }
    }
    cout<<"largest element:"<<arr[flag]<<endl;;
    cout<<"second largest"<<arr[res];
}

int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    largest(arr,n);
    
}