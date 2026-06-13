#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> landstart={2,8};
    vector<int> waterstart={6};
    vector<int> landend={4,1};
    vector<int> waterend={3};
    int ans=INT_MAX;
    for(int i=0;i<landstart.size();i++){
        for(int j=0;j<waterstart.size();j++){
        int landfinish=landstart[i]+landend[i];
       int waterstarttime=max(waterstart[j],landfinish);  // land->water
       int finish1=waterstarttime+waterend[j];
       ans=min(ans,finish1);

         int waterfinish=waterstart[j]+waterend[j];
         int landstarttime=max(landstart[i],waterfinish);  // water->land
         int finish2=landstarttime+landend[i];
         ans=min(ans,finish2);



        
        }
    }
    cout<<ans<<endl;
    return 0;

}