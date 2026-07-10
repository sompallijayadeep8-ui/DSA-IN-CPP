#include<iostream>  // frequncey map. Pattern: Frequency Map + Traverse Map TC:O(N)average
#include<map>
using namespace std;

 void freq(vector<int>&arr){
    unordered_map<int,int>mpp;
    int n = arr.size();
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    int minfreq = INT_MAX;
    int maxfreq = INT_MIN;

   int maxelement = -1;
   int minelement = -1;

    for(auto it:mpp){
        cout<<it.first<<"-"<<it.second<<endl;
        if(it.second>maxfreq){
            maxfreq = it.second;
            maxelement = it.first;
        }
        if(it.second<minfreq){
            minfreq = it.second;
            minelement = it.first;
        }
    }
     cout<<"max element frequency:"<<maxelement<<"->"<<maxfreq<<endl;
     cout<<"min element frequency:"<<minelement<<"->"<<minfreq;

     

   

}
int main(){
    int size;
    cout<<"enter size of an array:";
    cin>>size;
    vector<int>arr(size);
    cout<<"enter"<<size<<"elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }


     freq(arr);

   

}