#include<iostream>
using namespace std;
int mole(int *arr,int n){
    int ans =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]^arr[j]==0){
                ans = arr[i];
            }
        }
    }
    return ans;
}
int main(){
    int a[]={1,2,3,4,5,6,7,3};//contains all number from 1 to n-1 n=6
    int size =sizeof(a)/sizeof(int);
    int ans= mole(a,size);
    cout<<"The repeated number in the array is: "<<ans<<endl;

    }