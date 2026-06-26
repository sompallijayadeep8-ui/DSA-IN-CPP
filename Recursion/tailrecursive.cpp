#include<iostream>
using namespace std;
int rec(int n){
    if(n==0)       return 0;
    cout<<n<<" ";
    rec(n-1);
    // tail recursion is when the recursive call is the last statement in the function, here we have cout statement after the recursive call so this is not tail recursion.
    // tail recursion can be optimized by the compiler to iterative code, which can save memory and  improve performance, but in this case since we have a statement after the recursive call, the compiler cannot optimize it to iterative code.
}
int tail_rec(int n,int k=1){
    if(n==0)       return 0;
    cout<<k<<" ";
 tail_rec(n-1,k+1);
}
int main(){
    rec(3);
    cout<<endl;
    tail_rec(3);
    return 0;
}
