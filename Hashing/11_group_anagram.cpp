#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;
vector<vector<string>>groupanagram(vector<string>&strs){
    unordered_map<string,vector<string>>mpp;
   for(string group:strs){
    string key = group;
    sort(key.begin(),key.end());
    mpp[key].push_back(group);
   }
   vector<vector<string>>result;
   for(auto it:mpp){
    result.push_back(it.second);
   }
   return result;

}
int main(){
    int n;
    cout<<"enter how many strings:";
    cin>>n;
    vector<string>str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
   vector<vector<string>>result = groupanagram(str);
   cout<<"anangram groups\n";
   for(vector<string> group:result){
    cout<<"[";
   for(string word:group){
    cout<<word<<" ";


   }
   cout<<"],\n";

   }
}
//Grouping Pattern:
//common signature -> list of originals
/*
--------------------------------------------------
Pattern:
Grouping (Hash Map)

Data Structure:
unordered_map<string, vector<string>>

Key:
Sorted string

Value:
Vector of original strings

Example:

"aet"
   ↓
["eat", "tea", "ate"]

--------------------------------------------------
Approach:

1. Traverse every string.
2. Copy the string.
3. Sort the copied string.
4. Use the sorted string as the key.
5. Push the original string into the corresponding vector.
6. Traverse the map and store every vector into the result.

--------------------------------------------------
Time Complexity:

Let:
n = number of strings
k = average length of each string

For each string:
- Copy string      -> O(k)
- Sort string      -> O(k log k)
- Hash insertion   -> O(1) Average

Total:

O(n × k log k)

Reason:
Sorting every string dominates the running time.

--------------------------------------------------
Space Complexity:

Hash Map stores:
- All original strings
- Sorted keys
- Result vector

Space:

O(n × k)

--------------------------------------------------
Interview Optimization:

Instead of sorting each string,
build a frequency key (26 characters).

Time:

O(n × k)

instead of

O(n × k log k)

--------------------------------------------------
*/
