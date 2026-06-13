#include<iostream>
#include<unordered_map>
using namespace std;
void twosum(int arr[],int n,int target){
    unordered_map<int,int>seen;
    for(int i=0;i<n;i++){
        int need=target-arr[i];
        if(seen.find(need)!=seen.end()){
            cout<<"pair founded:"
            <<need<<" "<<
            arr[i];
            return;
        }
        seen[arr[i]]=i;
    }
    cout<<"no pair founded";

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
    int target;
    cout<<"enter target:";
    cin>>target;
    twosum(arr,n,target);
}