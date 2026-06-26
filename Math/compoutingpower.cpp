#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0){
        return 1;
    }
    int temp = power(a,b/2);
    temp = temp*temp;
    if(b%2==0){
        return temp;
    }
    else{
        return a*temp;
    }
    }
    int main(){
    int a,b;
    cout<<"enter a number and its power :";
    cin>>a>>b;
    cout<<a<<" raised to the power "<<b<<" is :"<<power(a,b);
    return 0;
}