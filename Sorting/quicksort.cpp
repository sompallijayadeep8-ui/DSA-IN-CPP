#include<iostream>
using namespace std;
int quick(vector<int>&arr,int left,int right){
    int pivot = arr[left];
    int count = 0;
    for(int i=left+1;i<=right;i++){   
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotindex = left+count;
    swap(arr[left],arr[pivotindex]);
    int i = left;
    int j = right;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i],arr[j]);
            i++;
            j--;


        }
    }
    return pivotindex;
}
void quicksort(vector<int>&arr,int left,int right){
    if(left>=right){
        return ;
    }
    int p = quick(arr,left,right);
    quicksort(arr,left,p-1);
    quicksort(arr,p+1,right);

}
 int main()
        {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quicksort(arr, 0, n-1);

    cout << "Sorted Array: ";

    for(int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}
