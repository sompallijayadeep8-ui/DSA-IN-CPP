#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int>topfreq(vector<int>&nums,int k){
    unordered_map<int,int>map;
    for(int i=0;i<nums.size();i++){
        map[nums[i]]++;
    }
    vector<vector<int>>bucket(nums.size()+1);
    for(auto it:map){
       bucket[it.second].push_back(it.first);
    }
    vector<int>ans;
    for(int i=bucket.size()-1;i>=0 && ans.size()<k;i--){
       for(int it:bucket[i]){
           ans.push_back(it);

           if(ans.size()==k){
            break;
           }
       }
    }
    return ans;
    

}
int main(){
    int n;
    cout<<"enter size of an array:";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k;
    cout<<"enter top number of frequencys you want:";
    cin>>k;
    vector<int>result = topfreq(nums,k);
    cout<<"these are top frequencyes you got :";
    for(int it:result){
        cout<<it<<" ";
    }
}

/*
==========================================================
LeetCode 347 - Top K Frequent Elements
Pattern: Frequency + Bucket Sort
Difficulty: Medium

----------------------------------------------------------
Approach

1. Count frequency of every element using unordered_map.
2. Create buckets where index = frequency.
3. Store every element in its corresponding frequency bucket.
4. Traverse buckets from highest frequency to lowest.
5. Collect first k elements.

----------------------------------------------------------
Example

nums = [1,1,1,2,2,3]

Frequency Map

1 -> 3
2 -> 2
3 -> 1

Buckets

0 -> []
1 -> [3]
2 -> [2]
3 -> [1]
4 -> []
5 -> []
6 -> []

Traverse from back

Bucket 6
Bucket 5
Bucket 4
Bucket 3 -> 1
Bucket 2 -> 2

Answer

[1,2]

----------------------------------------------------------
Time Complexity

Step 1:
Build Frequency Map
O(n)

Step 2:
Insert elements into buckets
O(m)

Step 3:
Traverse buckets
O(n)

Total

O(n)

where

n = size of array
m = number of unique elements

Since m <= n

Overall

O(n)

----------------------------------------------------------
Space Complexity

Frequency Map
O(m)

Buckets
O(n)

Answer
O(k)

Overall

O(n)

----------------------------------------------------------
Comparison

Method 1 (Sorting)

Frequency Map
+
Vector<Pair>
+
Sort

TC

O(n + m log m)

Worst Case

O(n log n)

----------------------------------------------------------

Method 2 (Bucket Sort)

Frequency Map
+
Buckets

TC

O(n)

Better than sorting because no sorting is performed.

==========================================================
*/

