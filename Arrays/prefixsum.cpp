#include<iostream>
using namespace std;
void prefix(int arr[],int n){
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
       
    }
     for(int i=0;i<n;i++){
        cout<<prefix[i]<<" ";
     }
     int L, R;
cout << "Enter L and R: ";
cin >> L >> R;

int sum;

if(L == 0){
    sum = prefix[R];
}
else{
    sum = prefix[R] - prefix[L-1];
}

cout << "Range sum = " << sum;
  
    
}
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    prefix(arr,n);
}