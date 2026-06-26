#include<iostream>
using namespace std;
void sellbuy(int arr[],int n){
    int minprofit=arr[0];
    int maxprofit=0;
    for(int i=1;i<n;i++){
        if(arr[i]<minprofit){
            minprofit=arr[i];
        }
        int profit=arr[i]-minprofit;
        if(profit>maxprofit){
            maxprofit=profit;
        }

    }
    cout<<"maxprofit is:"<<maxprofit;
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
    sellbuy(arr,n);
}