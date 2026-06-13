#include<iostream>
using namespace std;
void tower(int n,char a,char b,char c){
    if(n==1){
        cout<<"Move disk "<<n<<" from "<<a<<" to "<<c<<endl;
        return;
    }
    tower(n-1,a,c,b);
    cout<<"Move disk "<<n<<" from "<<a<<" to "<<b<<endl;
    tower(n-1,b,a,c); // move the n-1 smaller disks from 'c' peg to 'b' peg, using 'a' as the temporary peg
}
int main(){
    int n;
    cout<<"Enter the number of disks: ";
    cin>>n;
    tower(n,'A','B','C');
    return 0;
}