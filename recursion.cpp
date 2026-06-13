#include<iostream>
using namespace std;
int recursion(int n);
int recursion(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*recursion(n-1);
    }
    }
    int main(){
        int n;
        cout<<"enter a number:";
        cin>>n;
        cout<<"the factriol of number is:"<<recursion(n);
        return 0;
    }