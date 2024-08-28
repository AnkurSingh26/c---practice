#include<iostream>
#include<map>
using namespace std;
int main(){
    int arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    map<int, int> mpp;
    for(int i=0;i<7;i++){
        mpp[arr[i]]++;
    }
    int number;
    cin>>number;
    cout<<mpp[number];
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second;
    }
}