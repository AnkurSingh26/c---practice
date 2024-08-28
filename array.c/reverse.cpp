#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++){
        cout<<arr[i]<< ",";
    }
}
int main(){
    int arr[10]={1,2,3};
    //printarray(arr,10);
    int apr[5]={1,20,8,5,6};
    reverse(apr,5);
    printarray(apr,5);
}