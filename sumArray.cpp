#include<iostream>
using namespace std;
int sumArray(int arr[],int size){
    int s=0;
    for(int i=0;i<size;i++){
        s+=arr[i];
    }
    return s;
}

int main(){
    int n,sum;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    sum =  sumArray(a,n);
    cout<<"The sum of elements in the array: "<<sum<<endl;


}