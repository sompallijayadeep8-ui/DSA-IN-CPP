#include<iostream>
using namespace std;
int rec(int n){
    if(n==0)       return 0;
    rec(n-1);
    cout<<n<<" m";
    
   
    

}
int main(){
    rec(3);
    return 0;
}