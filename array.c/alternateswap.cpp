#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    
    for(int i=0;i<=5;i++){
        swap(arr[i],arr[i+1]);
        i=i+1;
        
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
    int apr[6]={1,20,8,5,9,6};
    reverse(apr,6);
    printarray(apr,6);
}