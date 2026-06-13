#include<iostream>
using namespace std;
void linearsearch(int arr[],int n,int target){
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            found=true;
        }
    }
    if(found==true){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}
int main(){
    int n;
    int target;
    cout<<"array size:";
    cin>>n;
   int arr[n];
   cout<<"enter elements:";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<"enter element to search";
   cin>>target;
   linearsearch(arr,n,target);

}