#include<iostream>
using namespace std;
int revArr(int arr[],int size){
int start =0;
int end = size-1;
while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
}

int main(){
    int n,a[10];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  revArr(a,n);

    cout<<"The reversed array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}