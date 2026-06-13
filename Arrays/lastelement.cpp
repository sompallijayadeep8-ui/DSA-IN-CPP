#include<iostream>
using namespace std;
int greate(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[i]){
                flag=false;
                break;
            }
        }
        if(flag==true) return i;
    }
     return -1;
}
int main(){
    int arr[]={5,2,3,4,1};
    cout<<greate(arr,5);
}