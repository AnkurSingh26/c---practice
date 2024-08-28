#include<iostream>
using namespace std;
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[10]={1,2,3};
    //printarray(arr,10);
    int apr[10]={1,20};
    printarray(apr,10);
}