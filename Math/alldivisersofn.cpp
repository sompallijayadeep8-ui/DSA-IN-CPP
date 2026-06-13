#include<iostream>
using namespace std;
void alldivisers(int n);
void alldivisers(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i){
                cout<<n/i<<" ";
            }
        }
    }
}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    cout<<"the all divisers of number is :";
    alldivisers(n);
    return 0;
}