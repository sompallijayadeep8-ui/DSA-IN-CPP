#include<iostream>
#include<vector>
using namespace std;
void sieveprime(int n);
void sieveprime(int n){
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    cout<<"the prime numbers up to "<<n<<" are :";
    sieveprime(n);
    return 0;
}   