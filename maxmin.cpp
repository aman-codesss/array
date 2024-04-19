#include<iostream>
#include<climits>//to use INT_MAX and INT_MIN
using namespace std;
int getMax(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi = max(maxi,arr[i]);//USE OF max min to avoid below 3 line code
        // if(arr[i]>maxi){
        //     maxi=arr[i];
        // }
    }
    return maxi;
}
int getMin(int arr[],int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini= min(mini,arr[i]);

        // if(arr[i]<mini){
        //     mini=arr[i];
        // }
    }
    return mini;
}
int main(){
    int size;
    int num[100];
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"The greatest number in array is: "<<getMax(num,size)<<endl;
    cout<<"The smalleset number in array is: " <<getMin(num,size)<<endl;
}