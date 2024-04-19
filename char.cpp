#include<iostream>
using namespace std;
void printingArray(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
void charArray(char arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
   
    int a[10]={3,4,5,6,7,2};
    printingArray(a,10);
    cout<<endl;
    char b[8]={'a','b','d','e'};
    charArray(b,8);
    int SIZE_ARR = sizeof(a)/sizeof(int);
    cout<<SIZE_ARR;
    //you can never find out the actual array elements size.

}