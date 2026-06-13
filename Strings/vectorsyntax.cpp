#include<iostream>
#include<vector>
using namespace std;
int myfuck();
int main(){
    int n,m;
    cout<<"enter the size of the vector :";
    cin>>n;
    vector<int> v(n);
    cout<<"enter the elements of the vector :";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"enter the element to be searched :";
    cin>>m;
    int res=-1;
    for(int i=0;i<n;i++){
        if(v[i]==m){
            res=i;
            break;
        }
    }
    if(res==-1){
        cout<<"element not found in the vector"<<endl;
    }
    else{
        cout<<"element found at index :"<<res<<endl;
    }
    

    cout<<"my fuck function called"<<endl,myfuck();
}
int myfuck(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<"First element: "<<v.front()<<endl;
    cout<<"Last element: "<<v.back()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;

}