#include<iostream>
using namespace std;
int isPalindrome(int n);
int isPalindrome(int n){
    int dig=0,rev=0;
    while(n!=0){
        dig=n%10;
        rev=rev*10+dig;
        n/=10;
    }
    return rev;

    
    }

int main(){
    int n;
    cout<<"enter your number :";
    cin>>n;
    
    if(n==isPalindrome(n)){
        cout<<"the number is palindrome";
    }
    else{
        cout<<"it is not palindrome";
    }

}