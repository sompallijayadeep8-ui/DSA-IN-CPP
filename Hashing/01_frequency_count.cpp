#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter size of array:";
    cin>>size;
    vector<int>vec(size);
    cout<<"enter numbers in array:";
    for(int i=0; i<size;i++){
        cin>>vec[i];
    }
    int hash[13] = {0};
    for(int i=0;i<size;i++){
        hash[vec[i]] += 1;
    }


    int q;
    cout<<"enter your require quaries:";
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        cout<<"number appers times:"<<hash[number]<<endl;
       
    }
   
}