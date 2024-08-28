#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> v={1,2,3,4,5};
    for (vector<int>::iterator it =v.begin();it<v.end();it++){
        cout<<*(it)<<endl;
    }
    for(auto it=v.begin();it<v.end();it++){
        cout<<*(it)<<endl;
    }
    for(int i=0;i<v.size();i++){
        cout << v[i];
    }
    for(auto it:v){
        cout<<it<<endl;
    }
    v.erase(v.begin()+1);
    v.pop_back();
    for(auto it:v){
        cout<<it<<endl;
    }
}