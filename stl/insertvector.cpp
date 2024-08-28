#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> v={1,2,3,4,5};
    v.push_back(50);
    v.insert(v.begin()+1,200);
    
    for(auto it=v.begin();it<v.end();it++){
        cout<<*(it)<<endl;

    }
    vector<int> copy(3,50);
    v.insert(v.begin(),copy.begin(),copy.end());
    for(auto it=v.begin();it<v.end();it++){
        cout<<*(it)<<endl;

    }

}