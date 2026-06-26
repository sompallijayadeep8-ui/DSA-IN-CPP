#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<vector<int>>lap(vector<vector<int>>&inteverls){
    sort(inteverls.begin(),inteverls.end());
    vector<vector<int>>temp;
    temp.push_back(inteverls[0]);
    for(int i=1;i<inteverls.size();i++){
    if(inteverls[i][0] <=temp.back()[1]){
        temp.back()[1] = max(temp.back()[1],inteverls[i][1]);
    }
    else{
        temp.push_back(inteverls[i]);
    }
    }
    return temp;

}

int main()
{
    int n;
    cout << "Enter number of intervals: ";  
    cin>>n;            

    vector<vector<int>> intervals(n, vector<int>(2));

    cout << "Enter intervals start and end:\n";

    for(int i = 0; i < n; i++)
    {
       
        cin >> intervals[i][0] >> intervals[i][1];
    }
    vector<vector<int>>result=lap(intervals);

    cout << "Intervals entered:\n";

    for(int i = 0; i < result.size(); i++)
    {
        cout << "[" << result[i][0] << "," << result[i][1] << "] ";
    }

    return 0;
}

//The C++ STL sort() internally uses a very efficient sorting algorithm 
//(Introsort), whose average complexity is:
//O(n log n)