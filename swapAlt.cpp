#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,5,6,7,9,8};
    int size = sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}