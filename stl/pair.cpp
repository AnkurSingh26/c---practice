#include<iostream>
using namespace std;
int main(){
    pair<int,int> ar={1,2};
    cout<<ar.second<<endl;
    pair<int,pair<int,int>> p={1,{3,4}};
    cout<<p.second.second;
    pair<int ,int>arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[2].second;
}