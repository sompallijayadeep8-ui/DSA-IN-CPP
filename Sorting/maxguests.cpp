#include<iostream>
#include<vector>
using namespace std;
int maxguests(vector<int>&arrival,vector<int>&departure){
    sort(arrival.begin(), arrival.end());
    sort(departure.begin(),departure.end());
    int i=1;
    int j=0;
    int guests=1;
    int maxguest = 1;
    while(i<arrival.size() && j<departure.size()){   //Sorting + Two Pointers
    if(arrival[i]<=departure[j]){
        guests++;
         maxguest = max(maxguest,guests);
        i++;
    }
    else{
        guests--;
        j++;
    }
}

    return maxguest;

   


}


int main()
{
    int n;

    cout << "Enter number of guests: ";
    cin >> n;

    vector<int> arrival(n);
    vector<int> departure(n);

    cout << "Enter arrival times:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> arrival[i];
    }

    cout << "Enter departure times:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> departure[i];
    }
   int result = maxguests(arrival,departure);

    cout << "\nGuests:\n";

    for(int i = 0; i < n; i++)
    {
        cout << "Guest " << i+1
             << " : " << arrival[i]
             << " -> " << departure[i]
             << endl;
    }
    cout<<"guests are present at same time:"<<result;

    return 0;
}