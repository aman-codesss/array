#include<iostream>
using namespace std;
int search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int key;
    cin>>key;
    int a[10]={1,3,5,4,8,9,-33,45,20};
    bool isPresent = search(a,10,key);
    if(isPresent){
        cout<<"The number is present in the array";
    }else{

        cout<<"The number is absent from the array";
    }
    
}