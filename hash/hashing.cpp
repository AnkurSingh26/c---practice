#include<iostream>
using namespace std;
int main(){
    int arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    int hash[8]={0};

    for(int i=0;i<8;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cin>>q;
    cout<<hash[q];
}