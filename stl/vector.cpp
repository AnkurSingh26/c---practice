#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> v={1,2,3,4,5};
    v.push_back(2);
    
    for(int i=0;i<v.size();i++){
        cout << v[i];

        
    }cout<< endl;
    vector<int> p(5,20);
    for(int i=0;i<p.size();i++){
        cout << p[i]<<endl;
    }
    //vector<int> ::iterator it=p.begin();
    
    //vector<int>::iterator it=p.end();
    //vector<int> ::iterator it=p.rend();
    vector<int>::reverse_iterator it=p.rbegin();
    it++;

   
}