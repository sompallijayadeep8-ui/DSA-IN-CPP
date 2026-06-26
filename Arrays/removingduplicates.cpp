#include<iostream>
using namespace std;
void duplicates(int arr[],int n){
    if(n == 0)return ;

    int res=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }

    int count=0;
    for(int i=0;i<res;i++){
        cout<<arr[i]<<" ";
        count++;
        
        
    }
    cout<<"count"<<count;


    for(int i=0;i<res;i++){
        cout<<arr[i]<<" ";
    }
   
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
    cout<<"removing duplicates:";
     duplicates(arr,n);
    

}