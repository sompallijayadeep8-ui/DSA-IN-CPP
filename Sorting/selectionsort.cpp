#include<iostream>
using namespace std;
void selection(int arr[],int n){
<<<<<<< HEAD
    for(int i=0;i<n-2;i++){
        int minterm=i;
        for(int j=i;j<n-1;j++){
=======
    for(int i=0;i<n;i++){
        int minterm=i;
        for(int j=i+1;j<n;j++){
>>>>>>> 558aca2cc69af5301194a4026c4a3f3ceb09c8ea
            if(arr[j]<arr[minterm]){
                minterm=j;
            }
        }
        if(minterm!=i){
            swap(arr[i],arr[minterm]);
<<<<<<< HEAD
           
        }
    }
      cout<<"selectionsort:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    
    }
   
=======
        }
    }
>>>>>>> 558aca2cc69af5301194a4026c4a3f3ceb09c8ea
    
}
int main(){
    int n;
    cout<<"enter size of an array:";
    cin>>n;
    int arr[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection(arr,n);
<<<<<<< HEAD
   
}

// tc in any case : O(n^2)
=======
    cout<<"selectionsort:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
>>>>>>> 558aca2cc69af5301194a4026c4a3f3ceb09c8ea
