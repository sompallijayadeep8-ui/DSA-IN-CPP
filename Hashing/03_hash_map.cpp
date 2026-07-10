#include <map>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    cout<<"mpp size:"<<mpp.size()<<endl;
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
      
    int q;
    cout<<"enter req quaries:";
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        cout<<"you entered number count:"<<mpp[number]<<endl;
    }
}



