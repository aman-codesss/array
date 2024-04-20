#include<iostream>
// #include<algorithm>//includes .swap() and .sort() method.
using namespace std;
void printingArray(int arr[], int n){
for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
void polarize(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        while(arr[i]==0 && i<j){
            i++;
        
        }
        while(arr[j]==1 && i<j){
            j--;
        
        }
        //swapping the values
        while(arr[i]==1 && arr[j]==0 &&i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    }
    printingArray(arr,9);
}
int main(){
    int arr[]={1,1,1,0,0,0,1,0,1};
    printingArray(arr,9);
    polarize(arr,9);
    

}