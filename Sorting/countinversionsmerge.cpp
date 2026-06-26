#include<iostream>
using namespace std;
long long counts(vector<int>&arr,int left,int mid,int right){
    vector<int>temp;
    int i = left;
    int j = mid+1;              //Sorting + Greedy
    long long count = 0;
    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
               i++;
        }
        else{
            count+=mid-i+1;
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=right){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=0;k<temp.size();k++){
        arr[left+k] = temp[k];
    }
    return count;
}

long long inversecount(vector<int>&arr,int left,int right){
    if(left>=right){
        return 0;
    }
    long long count = 0;
      int mid = left+(right-left)/2;
   count+= inversecount(arr,left,mid);
   count+= inversecount(arr,mid+1,right);
   count+= counts(arr,left,mid,right);
    return count;


}

 int main(){
        
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

  long long count =  inversecount(arr, 0, n - 1);

    cout << "number of inversions: "<<count;

   
    
 }

 //Left inversions
//+
//Right inversions
//+
//Cross inversions