#include<iostream>
using namespace std;
int add();
int add(int n){
    int res=0;
    while(n>0){
        n/=10;
      res++;
    }
    return res;


}

int main(){
    int n;
    cout<<"enter number :";
    cin>>n;
    cout<<"addition of numbers is "<<add(n);
}