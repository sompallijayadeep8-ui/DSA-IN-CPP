#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter string :";
    cin>>s;

    int hash[256] = {0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }



    int q;
    cout<<"enter your req quarrys:";
    cin>>q;
   while(q--){
    char c;
    cin>>c;
    
     cout<<"your entred leter count:"<<hash[c]<<endl;
   }
}
